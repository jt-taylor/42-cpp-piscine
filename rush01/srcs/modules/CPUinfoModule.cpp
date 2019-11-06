#include "CPUinfoModule.hpp"

CPUinfoModule::CPUinfoModule()
{
	this->join_the_info();
}
CPUinfoModule::CPUinfoModule(const CPUinfoModule & ref)
{
	*this = ref;
}
CPUinfoModule&		CPUinfoModule::operator= (const CPUinfoModule & ref)
{
	if (this == &ref)
		;
	return (*this);
}
CPUinfoModule::~CPUinfoModule()
{
}

// -----------------------------------------------------------------------------

//don't use me
void*	CPUinfoModule::getData()
{
	//don't use me
	return (0);
//	return (this->getCPUinfo());
}

std::string	CPUinfoModule::get(std::string command_string)
{
	char	buffer[128];
	this->ret_str = "";
	FILE*	pipe = popen(command_string.c_str(), "r");
	if (!pipe)
		throw std::runtime_error("popen failed");
	try {
		while (fgets(buffer, sizeof(buffer), pipe) != NULL)
			this->ret_str += buffer;
	} catch (...) {
		pclose(pipe);
		throw;
	}
	pclose(pipe);
	return this->ret_str;
}

void	CPUinfoModule::join_the_info()
{
	std::string tmp;
	tmp = "";
	try {
		tmp += this->get("sysctl -n machdep.cpu.brand_string");
		tmp += "Usage : " + this->get("top -l 1 | grep -E \"^CPU\"");
		tmp += "# of CPU cores : " + this->get("sysctl -n hw.physicalcpu");
	} catch (...) {
	}
	this->ret_str = tmp;
}

std::string	CPUinfoModule::getCPUinfo()
{
	this->join_the_info();

	return (this->ret_str);
}

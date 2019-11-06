#include "RAMinfoModule.hpp"

RAMinfoModule::RAMinfoModule()
{
	this->get();
}
RAMinfoModule::RAMinfoModule(const RAMinfoModule & ref)
{
	*this = ref;
}
RAMinfoModule&		RAMinfoModule::operator= (const RAMinfoModule & ref)
{
	if (this == &ref)
		;
	return (*this);
}
RAMinfoModule::~RAMinfoModule()
{
}

// -----------------------------------------------------------------------------
//
// not sure which way we want to do this 
// some of the ways to do it are
// sysctl vm.loadavga || which results in something like 
// 		vm.loadavg: { 2.05 1.79 1.66 }
// or vm_stat
// but the following is probably fine
// top -l 1 | grep -E "^CPU|^Phys"

//don't use me
void*	RAMinfoModule::getData()
{
	//don't use me
	return (0);
//	return (this->getRAMinfo());
}

void	RAMinfoModule::get()
{
	//getrusage only works on the calling process
	//getrusage(RUSAGE_SELF, &this->usage_info);
	char	buffer[128];
	this->ret_str = "";
	//FILE*	pipe = popen("top -l 1 | grep -E \"^CPU|^Phys\"", "r");
	FILE*	pipe = popen("top -l 1 | grep -E \"^Phys\"", "r");
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
}

std::string	RAMinfoModule::getRAMinfo()
{
	this->get();

	return (this->ret_str);
}

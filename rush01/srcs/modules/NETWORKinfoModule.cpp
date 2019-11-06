#include "NETWORKinfoModule.hpp"

NETWORKinfoModule::NETWORKinfoModule()
{
	this->get();
}
NETWORKinfoModule::NETWORKinfoModule(const NETWORKinfoModule & ref)
{
	*this = ref;
}
NETWORKinfoModule&		NETWORKinfoModule::operator= (const NETWORKinfoModule & ref)
{
	if (this == &ref)
		;
	return (*this);
}
NETWORKinfoModule::~NETWORKinfoModule()
{
}

// -----------------------------------------------------------------------------
// probably going to use net top to get the bytes in // out 
// 		we only need to use nettop if we want to get the usage for specific processes
// 		nettop -l 1 -x -P -J bytes_in,bytes_out
// 		nettop -l 1 -x -P -J bytes_in,bytes_out | grep -Eo ' [0-9]{1,30}' // for just the numbers
// nettop is being really picky so i'm just going to implement the top method even if it's less accurate

//don't use me
void*	NETWORKinfoModule::getData()
{
	//don't use me
	return (0);
}

//for nettop -- currently not working properly
void	NETWORKinfoModule::add_to_vector()
{
	std::istringstream		ss;
	//ss << this->ret_str;
//	std::cout << ret_str;
//	std::cout << ss;
//	std::string	tmp;
//	while (!ss.eof())
//	{
//		std::getline(this->ret_str, ss);
//		//
//		std::cout << ss;
//		ss >> tmp;
//		std::cout << tmp;
//		this->vin.push_back(std::stod(tmp));
//		tmp = "";
//		ss >> tmp;
//		this->vout.push_back(std::stod(tmp));
//	}
}

//for nettop -- currently not working properly
void	NETWORKinfoModule::add_to_sum()
{
	long double		in = 0;
	long double		out = 0;

	for (std::vector<int>::iterator it = this->vin.begin(); it != this->vin.end(); it++)
		in += *it;
	for (std::vector<int>::iterator it = this->vout.begin(); it != this->vout.end(); it++)
		out += *it;
	this->ret = "Mb(in) = " + std::to_string(in / 1048576) + "\nMb(out) = " + std::to_string(out / 1048576);
}

//for nettop -- currently not working properly
void	NETWORKinfoModule::get()
{
	char	buffer[128];
	this->ret_str = "";
//	FILE*	pipe = popen("nettop -l 1 -x -P -J bytes_in,bytes_out | grep -Eo ' [0-9]{1,30}'", "r");
	FILE*	pipe = popen("top -l 1 | grep 'Networks'", "r");
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

std::string	NETWORKinfoModule::getNETWORKinfo()
{
	this->get();
	//for nettop
//	std::cout << this->ret_str;
//	this->add_to_vector();
//	for (std::vector<int>::iterator it = this->vin.begin();it != this->vin.end();it++)
//			std::cout << *it;
//	this->add_to_sum();

	return (this->ret_str);
}

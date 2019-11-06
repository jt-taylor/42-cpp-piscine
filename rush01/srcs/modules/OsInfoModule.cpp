#include "OsInfoModule.hpp"

OsInfoModule::OsInfoModule()
{
	this->get();
}
OsInfoModule::OsInfoModule(const OsInfoModule & ref)
{
	*this = ref;
}
OsInfoModule&		OsInfoModule::operator= (const OsInfoModule & ref)
{
	if (this == &ref)
		return *this;
	return (*this);
}
OsInfoModule::~OsInfoModule()
{
}

// -----------------------------------------------------------------------------

void	OsInfoModule::get()
{
	uname(&this->our_uname);
}

void*	OsInfoModule::getData()
{
	return (&this->our_uname);
}

struct utsname	OsInfoModule::getOsInfo()
{
	return (this->our_uname);
}

//system name
std::string		OsInfoModule::get_sysname()
{
	return (this->our_uname.sysname);
}
//computers name in a unspecified network , not really usefull
std::string		OsInfoModule::get_nodename()
{
	return (this->our_uname.nodename);
}
//the os realease 
std::string		OsInfoModule::get_release()
{
	return (this->our_uname.release);
}
//the os system version
std::string		OsInfoModule::get_version()
{
	return (this->our_uname.version);
}
//the hardware identifier
std::string		OsInfoModule::get_machine()
{
	return (this->our_uname.machine);
}

#include "HostNameModule.hpp"

HostNameModule::HostNameModule()
{
	this->get();
}
HostNameModule::HostNameModule(const HostNameModule & ref)
{
	*this = ref;
}
HostNameModule&		HostNameModule::operator= (const HostNameModule & ref)
{
	if (this == &ref)
		return *this;
	return (*this);
}
HostNameModule::~HostNameModule()
{
}

// -----------------------------------------------------------------------------

void	HostNameModule::get()
{
	//or just use getlogin()
	//char	tmp[_POSIX_LOGIN_NAME_MAX];
	char	tmp[_POSIX_HOST_NAME_MAX];
	// this returns the username , not sure if we want that instead
	//getlogin_r(tmp, _POSIX_LOGIN_NAME_MAX);
	gethostname(tmp, _POSIX_HOST_NAME_MAX);
	this->data = tmp;
}

void*	HostNameModule::getData()
{
	//im being picky don't use me 
	return 0;
	//return (this->data.c_str());
}

std::string	HostNameModule::getHostName()
{
	return (this->data);
}

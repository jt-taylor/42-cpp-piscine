#ifndef HOSTNAMEMODULE_HPP
# define HOSTNAMEMODULE_HPP

#include "IMonitorModule.hpp"

class HostNameModule : public IMoniterModule
{
	public:
	HostNameModule();
	HostNameModule(const HostNameModule & ref);
	HostNameModule&		operator= (const HostNameModule & ref);
	~HostNameModule();
	void			get();
	void *		getData();
	std::string		getHostName();
	protected:
	private:
	std::string		data;
};

#endif

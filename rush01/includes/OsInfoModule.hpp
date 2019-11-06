#ifndef OSINFOMODULE_HPP
# define OSINFOMODULE_HPP

#include "IMonitorModule.hpp"

class OsInfoModule : public IMoniterModule
{
	public:
	OsInfoModule();
	OsInfoModule(const OsInfoModule & ref);
	OsInfoModule&		operator= (const OsInfoModule & ref);
	~OsInfoModule();
	void			get();
	void *		getData();
	struct utsname		getOsInfo();
	std::string		get_sysname();
	std::string		get_nodename();
	std::string		get_release();
	std::string		get_version();
	std::string		get_machine();
	protected:
	private:
	struct utsname	our_uname;
};

#endif

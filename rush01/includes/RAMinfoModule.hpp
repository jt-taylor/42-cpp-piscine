#ifndef RAMINFOMODULE_HPP
# define RAMINFOMODULE_HPP

#include "IMonitorModule.hpp"
// man getrusage

class RAMinfoModule : public IMoniterModule
{
	public:
	RAMinfoModule(); RAMinfoModule(const RAMinfoModule & ref);
	RAMinfoModule&		operator= (const RAMinfoModule & ref);
	~RAMinfoModule();
	void			get();
	void*	getData();
	std::string	getRAMinfo();
	protected:
	private:
	//getrusage only works on the calling process
	//struct rusage	usage_info;
	std::string		ret_str;
};

#endif

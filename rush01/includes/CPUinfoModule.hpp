#ifndef CPUINFOMODULE_HPP
# define CPUINFOMODULE_HPP

#include "IMonitorModule.hpp"

class CPUinfoModule : public IMoniterModule
{
	public:
	CPUinfoModule(); CPUinfoModule(const CPUinfoModule & ref);
	CPUinfoModule&		operator= (const CPUinfoModule & ref);
	~CPUinfoModule();
	std::string			get(std::string command_str);
	void	join_the_info();
	void*	getData();
	std::string	getCPUinfo();
	protected:
	private:
	std::string		ret_str;
};

#endif

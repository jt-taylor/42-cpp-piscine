#ifndef NETWORKINFOMODULE_HPP
# define NETWORKINFOMODULE_HPP

#include "IMonitorModule.hpp"
#include <sstream>
#include <vector>
#include <iterator>

class NETWORKinfoModule : public IMoniterModule
{
	public:
	NETWORKinfoModule(); NETWORKinfoModule(const NETWORKinfoModule & ref);
	NETWORKinfoModule&		operator= (const NETWORKinfoModule & ref);
	~NETWORKinfoModule();
	void			get();
	void			add_to_vector();
	void			add_to_sum();
	void*	getData();
	std::string	getNETWORKinfo();
	protected:
	private:
	std::string		ret;
	std::string		ret_str;
	std::vector<int>	vin;
	std::vector<int>	vout;
};

#endif

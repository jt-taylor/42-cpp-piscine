#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>

class Brain
{
	public:
	Brain(void);
	~Brain(void);

	std::string		identify(void);
	//it never asks us to print the descriptions so they are never filled in
	std::string		desc;
	std::string		flavor;
	std::string		type_of;
	std::string		state;
};
#endif

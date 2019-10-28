#ifndef PONY_HPP
# define PONY_HPP

#include <string>
#include <iostream>

class		Pony
{
	public:
	Pony(std::string str_breed, std::string str_name, std::string str_birth_date, std::string str_description);
	~Pony(void);

	std::string		breed;
	std::string		name;
	std::string		birth_date;
	std::string		desc;
};

#endif

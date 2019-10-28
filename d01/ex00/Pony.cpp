#include "Pony.hpp"

/*
 * constructor that takes 4 strings
 * initializes the strings in the class with the provided ones via an initialization list
 */
Pony::Pony(std::string str_breed, std::string str_name, std::string str_birth_date, std::string str_description)
	: breed(str_breed), name(str_name), birth_date(str_birth_date), desc(str_description)
		{
			std::cout << "Pony constucted ??? , now that doesn't make sense only trojan horses are made of wood" << std::endl;
		}

Pony::~Pony(void)
	{
		std::cout << "destructed pony " + this->name + ", how could you she was beautiful" << std::endl;
	}

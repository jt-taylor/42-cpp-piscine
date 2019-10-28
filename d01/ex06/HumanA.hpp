#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

//for this one we want to pass by reference because
//	when we change the wepon outside of the human class
//	we still want it change in the human class
//	generally people perfer reference becase a reference
//	is the object and a pointer is variable that stores
//	where the object is in memory
class HumanA
{
	public:
	HumanA(std::string name, Weapon& which);
	~HumanA();
	std::string		name;
	Weapon&			w;
	void			attack();
};

#endif

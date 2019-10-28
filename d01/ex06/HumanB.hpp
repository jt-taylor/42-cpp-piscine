#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

//here we have to take the Weapon class as a pointer because
//when we constuct an instance of HumanB we don't want to
//give weapon a garbage value // references can't be null
//unless im missing something here

class		HumanB
{
	public:
	HumanB(std::string name);
	~HumanB();
	Weapon*		type;
	std::string name;
	void		setWeapon(Weapon &w);
	void		attack();
};
#endif

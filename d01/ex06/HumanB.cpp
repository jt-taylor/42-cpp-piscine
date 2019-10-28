#include "HumanB.hpp"
HumanB::HumanB(std::string name_in) : name(name_in)
{
}
HumanB::~HumanB()
{
}

//this takes by reference because in the main it does jim.setWeapon(club)
void		HumanB::setWeapon(Weapon &w)
{
	this->type = &w;
}

void		HumanB::attack()
{
	std::cout << this->name + " attacks with his " + this->type->getType() << std::endl;
}

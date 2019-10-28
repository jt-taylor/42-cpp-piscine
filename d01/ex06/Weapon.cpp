#include "Weapon.hpp"

Weapon::Weapon(std::string in_type) : type(in_type)
{
}
Weapon::~Weapon()
{
}

void		Weapon::setType(std::string new_type)
{
	this->type = new_type;
}

const std::string&		Weapon::getType()
{
	return (this->type);
}

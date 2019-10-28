#include "Zombie.hpp"

Zombie::Zombie(std::string ztype, std::string zname) :  type(ztype), name(zname)
{
	announce();
}
Zombie::~Zombie(void)
{
	std::cout << "Zombie erased from existance" << std::endl;
};

void		Zombie::announce(void)
{
	std::cout << "<" + this->name + " " + this->type + ")> Brians... wait that isn't right" << std::endl;
}

#include "Zombie.hpp"

Zombie::Zombie()// :  type(ztype), name(zname)
{
	//announce();
}
Zombie::~Zombie(void)
{
	std::cout << "Zombie " + this->name + " erased from existance" << std::endl;
};

void		Zombie::announce(void)
{
	std::cout << "<" + this->name + " " + this->type + ")> Brians... wait that isn't right" << std::endl;
}

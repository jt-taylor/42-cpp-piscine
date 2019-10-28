#include "HumanA.hpp"

HumanA::HumanA(std::string my_name, Weapon& which) : name(my_name), w(which)
{
}
HumanA::~HumanA()
{
}

void			HumanA::attack()
{
	std::cout << this->name + " attacks with his " + this->w.getType() << std::endl;
}

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(std::string type_name)
{
	setZombieType(type_name);
};

ZombieEvent::~ZombieEvent(void)
{
	std::cout << "the concept of the living dead is no longer" << std::endl;
};

void		ZombieEvent::setZombieType(std::string type)
{
	this->type = type;
	std::cout << "zombie type set as" + this->type << std::endl;
	return ;
}

Zombie*		ZombieEvent::newZombie(std::string name)
{
	Zombie*		new_z = new Zombie(this->type, name);
	return new_z;
}

Zombie*		ZombieEvent::randomChump(void)
{
	int tmp = rand();
	return (newZombie(std::to_string(tmp)));
}

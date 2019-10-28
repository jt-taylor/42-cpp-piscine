#ifndef ZOMBIE_EVENT_HPP
# define ZOMBIE_EVENT_HPP

# include "Zombie.hpp"
# include <string>
# include <iostream>

class ZombieEvent
{
	public:
	ZombieEvent(std::string type_name);
	~ZombieEvent(void);
	Zombie		**list;
	std::string type;

	Zombie*	newZombie(std::string name);
	Zombie*	randomChump(void);
	void	setZombieType(std::string type);
};

#endif

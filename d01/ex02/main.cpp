#include "ZombieEvent.hpp"
#include "Zombie.hpp"
#include <iostream>
#include <string>

int		main(void)
{
	//zombieEvent on stack
	ZombieEvent		events("cannon fodder");
	//2 zombies on heap , cause the newZombie returns a pointer to Zombie
	Zombie *test1 = events.newZombie("heap zombie");
	events.setZombieType("uwu");
	Zombie *test2 = events.newZombie("heap zombie 2");
	Zombie	*rand = events.randomChump();

	//deallocate the zombies
	delete test1;
	delete test2;
	delete rand;
	//show no leaks
	return (0);
}

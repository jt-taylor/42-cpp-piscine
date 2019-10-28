#include "Zombie.hpp"
#include "ZombieHorde.hpp"
#include <iostream>
#include <string>

int		main(void)
{
	int		i = 20;
	ZombieHorde		horde(i);

	i = 0;
	horde.announce();
}

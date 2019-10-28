#ifndef ZOMBIE_HORDE_HPP
# define ZOMBIE_HORDE_HPP

#include <string>
#include <iostream>
#include "Zombie.hpp"

class ZombieHorde
{
	public:
		ZombieHorde(int n);
		~ZombieHorde(void);

		void	announce();
		int		for_announce;
		Zombie	*horde_arr;
		std::string	rand_name(void);
};

#endif

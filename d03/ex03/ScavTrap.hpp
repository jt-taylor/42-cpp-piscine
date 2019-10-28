#ifndef  SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string my_name);
		ScavTrap(const ScavTrap &original);
ScavTrap& operator= (const ScavTrap& original);
		~ScavTrap(void);
void		rangedAttack(std::string const & target);
void		meleeAttack(std::string const & target);
void		takeDamage(unsigned int amount);
void		beRepaired(unsigned int amound);
void		challengeNewcomer(std::string const & target);
};

#endif

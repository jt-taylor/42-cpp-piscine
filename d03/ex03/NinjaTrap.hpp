#ifndef  NINJATRAP_HPP
# define NINJATRAP_HPP

#include <iostream>
#include <string>

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap
{
	public:
		NinjaTrap();
		NinjaTrap(std::string my_name);
		NinjaTrap(const NinjaTrap &original);
NinjaTrap& operator= (const NinjaTrap& original);
		~NinjaTrap(void);
void		rangedAttack(std::string const & target);
void		meleeAttack(std::string const & target);
void		takeDamage(unsigned int amount);
void		beRepaired(unsigned int amound);
void		ninjaShoebox(ClapTrap const & ref);
void		ninjaShoebox(FragTrap const & ref);
void		ninjaShoebox(ScavTrap const & ref);
void		ninjaShoebox(NinjaTrap const & ref);
};
#endif

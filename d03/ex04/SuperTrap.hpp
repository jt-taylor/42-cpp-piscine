#ifndef  SUPERTRAP_HPP
# define SUPERTRAP_HPP

#include <iostream>
#include <string>

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

//so i needed to add default constructors to the classes
class SuperTrap : virtual public FragTrap, virtual public NinjaTrap
{
	public:
		SuperTrap();
		SuperTrap(std::string my_name);
		SuperTrap(const SuperTrap &original);
SuperTrap& operator= (const SuperTrap& original);
		~SuperTrap(void);
void		rangedAttack(std::string const & target);
void		meleeAttack(std::string const & target);
void		takeDamage(unsigned int amount);
void		beRepaired(unsigned int amound);
void		ninjaShoebox(ClapTrap const & ref);
void		ninjaShoebox(FragTrap const & ref);
void		ninjaShoebox(ScavTrap const & ref);
void		ninjaShoebox(NinjaTrap const & ref);
void		vaulthunder_dot_exe(std::string const & target);
};
#endif

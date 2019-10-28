#ifndef  SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include <string>

class ScavTrap
{
	private:
		int		hp;
		int		max_hp;
		int		ap;
		int		max_ap;
		int		level;
		int		attack_damage;
		int		ranged_damage;
		int		armour;
		std::string		name;

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

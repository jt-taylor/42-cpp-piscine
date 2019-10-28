#ifndef  CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
	protected:
		int		hp;
		int		max_hp;
		int		ap;
		int		max_ap;
		int		level;
		int		attack_damage;
		int		ranged_damage;
		int		armour;

	public:
		std::string		name;
		ClapTrap();
		ClapTrap(std::string my_name);
		ClapTrap(const ClapTrap &original);
ClapTrap& operator= (const ClapTrap& original);
		~ClapTrap(void);
void		rangedAttack(std::string const & target);
void		meleeAttack(std::string const & target);
void		takeDamage(unsigned int amount);
void		beRepaired(unsigned int amound);
void		vaulthunder_dot_exe(std::string const & target);
};
#endif

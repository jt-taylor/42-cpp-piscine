#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include <string>

class FragTrap
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
		FragTrap();
		FragTrap(std::string my_name);
		FragTrap(const FragTrap &original);
FragTrap& operator= (const FragTrap& original);
		~FragTrap(void);
void		rangedAttack(std::string const & target);
void		meleeAttack(std::string const & target);
void		takeDamage(unsigned int amount);
void		beRepaired(unsigned int amound);
void		vaulthunder_dot_exe(std::string const & target);
};

#endif

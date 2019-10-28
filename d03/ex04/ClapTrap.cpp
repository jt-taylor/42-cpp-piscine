#include "ClapTrap.hpp"

// -----------------------------------------------------------------------------
ClapTrap::ClapTrap()
{
}
ClapTrap::ClapTrap(std::string my_name) : name(my_name)
{
	std::cout << "Turn it up to 11" << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap & original)
{
	*this = original;
	std::cout << "They've gone into plaid" << std::endl;
}
ClapTrap& ClapTrap::operator=(const ClapTrap & original)
{
	this->name = original.name;
	this->hp = original.hp;
	this->max_hp = original.max_hp;
	this->ap = original.ap;
	this->max_ap = original.ap;
	this->level = original.level;
	this->attack_damage = original.attack_damage;
	this->ranged_damage = original.ranged_damage;
	this->armour = original.armour;
	std::cout << "Set me down this instance" << std::endl;
	return (*this);
}
ClapTrap::~ClapTrap()
{
	std::cout << "Goodbye Cruel World" << std::endl;
}
// -----------------------------------------------------------------------------
void				ClapTrap::meleeAttack(std::string const & target)
{
	std::cout << "ClapTrap <" + this->name + "> attacks " + target +
		" at range, causing <" << this->attack_damage << "> points of melee damage" << std::endl;
}
void				ClapTrap::rangedAttack(std::string const & target)
{
	std::cout << "ClapTrap <" + this->name + "> attacks " + target +
		" at range, causing <" << this->ranged_damage << "> points of ranged damage" << std::endl;
}
void				ClapTrap::takeDamage(unsigned int amount)
{
	if (amount <= (unsigned int)armour)
	{
		std::cout << "your atttack doesn't even scratch my armor" << std::endl;
		return ;
	}
	else if (amount > (unsigned int)(hp + armour))
		hp = 0;
	else
		hp -= amount - armour;
}
void				ClapTrap::beRepaired(unsigned int amount)
{
	if ((this->hp + (int)amount) > this->max_hp)
		this->hp = this->max_hp;
	else
		this->hp += (int)amount;
}

// -----------------------------------------------------------------------------

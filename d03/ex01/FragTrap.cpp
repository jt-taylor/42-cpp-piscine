#include "FragTrap.hpp"

// -----------------------------------------------------------------------------
FragTrap::FragTrap()
{
};
FragTrap::FragTrap(std::string my_name) : name(my_name)
{
	this->hp = 100;
	this->max_hp = 100;
	this->ap = 100;
	this->max_ap = 100;
	this->level = 1;
	this->attack_damage = 30;
	this->ranged_damage = 20;
	this->armour = 5;
	std::cout << "I got quests" << std::endl;
}
FragTrap::FragTrap(const FragTrap & original)
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
	std::cout << "Hey looke its me" << std::endl;
}
FragTrap& FragTrap::operator=(const FragTrap & original)
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
	std::cout << "There's more to learn" << std::endl;
	return (*this);
}
FragTrap::~FragTrap()
{
	std::cout << "Away with thee" << std::endl;
}
// -----------------------------------------------------------------------------
void				FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "FragTrap <" + this->name + "> attacks " + target +
		" at range, causing <" << this->attack_damage << "> points of melee damage" << std::endl;
}
void				FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "FragTrap <" + this->name + "> attacks " + target +
		" at range, causing <" << this->ranged_damage << "> points of ranged damage" << std::endl;
}
void				FragTrap::takeDamage(unsigned int amount)
{
	if (amount <= (unsigned int)this->armour)
	{
		std::cout << "your atttack doesn't even scratch my armor" << std::endl;
	}
	else if (amount > (unsigned int)(this->hp + this->armour))
	{
		this->hp = 0;
		std::cout << "I <" + this->name + "> am at 0 hp" << std::endl;
	}
	else
	{
		this->hp -= amount - this->armour;
		std::cout << "My <" + this->name + "> new hp is " << this->hp << std::endl;
	}
}
void				FragTrap::beRepaired(unsigned int amount)
{
	if ((this->hp + (int)amount) > this->max_hp)
	{
		this->hp = this->max_hp;
		std::cout << "I <" + this->name + "> am at max hp" << std::endl;
	}
	else
	{
		this->hp += (int)amount;
		std::cout << "my <" + this->name + "> am at " << this->hp << std::endl;
	}
}

void				FragTrap::vaulthunder_dot_exe(std::string const & target)
{
	//we really shoudn't be seeding rand() everytime but for this it won't matter
	if (this->ap < 25)
	{
		std::cout << "Not eneough energy to attack" << std::endl;
		return ;
	}
	srand(time(NULL));
	int		i = rand() % 5;
	if (i == 0)
		std::cout << "Magic missle --" << std::endl;
	else if (i == 1)
		std::cout << "Thuder Cross split attack" << std::endl;
	else if (i == 2)
		std::cout << "Freeze Ray --" << std::endl;
	else if (i == 3)
		std::cout << "Consecutive normal punches" << std::endl;
	else if (i == 4)
		std::cout << "Doomarang" << std::endl;
	if (i % 2 == 0)
		this->rangedAttack(target);
	else
		this->meleeAttack(target);
	this->ap -= 25;
}

// -----------------------------------------------------------------------------

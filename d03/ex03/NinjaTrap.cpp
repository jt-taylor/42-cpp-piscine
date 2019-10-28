#include "NinjaTrap.hpp"

// -----------------------------------------------------------------------------
NinjaTrap::NinjaTrap(){};
NinjaTrap::NinjaTrap(std::string my_name) : ClapTrap(my_name)
{
	this->hp = 60;
	this->max_hp = 60;
	this->ap = 120;
	this->max_ap = 120;
	this->level = 1;
	this->attack_damage = 60;
	this->ranged_damage = 5;
	this->armour = 0;
	srand(time(NULL));
	std::cout << "I'm on a quest of revenge" << std::endl;
}
NinjaTrap::NinjaTrap(const NinjaTrap & original) : ClapTrap(original)
{
	*this = original;
	std::cout << "Shh i'm hiding in plain sight" << std::endl;
}
NinjaTrap& NinjaTrap::operator=(const NinjaTrap & original)
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
	std::cout << "A master is always learning" << std::endl;
	return (*this);
}
NinjaTrap::~NinjaTrap()
{
	std::cout << "Away with thee" << std::endl;
}
// -----------------------------------------------------------------------------
void				NinjaTrap::meleeAttack(std::string const & target)
{
	ClapTrap::meleeAttack(target);
	std::cout << "That thing that all the animes do with the sword draw" << std::endl;
}
void				NinjaTrap::rangedAttack(std::string const & target)
{
	ClapTrap::rangedAttack(target);
	std::cout << "Super shurikan blast" << std::endl;
}
void				NinjaTrap::takeDamage(unsigned int amount)
{
	ClapTrap::takeDamage(amount);
	std::cout << "Ninjatrap now has " << hp << std::endl;
}
void				NinjaTrap::beRepaired(unsigned int amount)
{
	ClapTrap::beRepaired(amount);
	std::cout << "Ninjatrap repaired to " << this->hp << std::endl;
}

void				NinjaTrap::ninjaShoebox(ClapTrap const & ref)
{
	std::cout << "Base model " << ref.name << std::endl;
}
void				NinjaTrap::ninjaShoebox(FragTrap const & ref)
{
	std::cout << "Explosion model " << ref.name << std::endl;
}
void				NinjaTrap::ninjaShoebox(ScavTrap const & ref)
{
	std::cout << "Scavenger model " << ref.name << std::endl;
}
void				NinjaTrap::ninjaShoebox(NinjaTrap const & ref)
{
	std::cout << "Sneaky model " << ref.name << std::endl;
}
// -----------------------------------------------------------------------------

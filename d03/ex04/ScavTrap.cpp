#include "ScavTrap.hpp"

// -----------------------------------------------------------------------------
ScavTrap::ScavTrap()
{
};
ScavTrap::ScavTrap(std::string my_name) : ClapTrap(my_name)
{
	this->hp = 100;
	this->max_hp = 100;
	this->ap = 50;
	this->max_ap = 50;
	this->level = 1;
	this->attack_damage = 20;
	this->ranged_damage = 15;
	this->armour = 3;
	srand(time(NULL));
	std::cout << "Im not like other claptraps" << std::endl;
}
ScavTrap::ScavTrap(const ScavTrap & original) : ClapTrap(original)
{
	*this = original;
	std::cout << "It's a me Mario" << std::endl;
}
ScavTrap& ScavTrap::operator=(const ScavTrap & original)
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
	std::cout << "It's a big building with patients, but that's not important right now." << std::endl;
	return (*this);
}
ScavTrap::~ScavTrap()
{
	std::cout << "I am serious, and don't call me Shirley" << std::endl;
}
// -----------------------------------------------------------------------------
void				ScavTrap::meleeAttack(std::string const & target)
{
	ClapTrap::meleeAttack(target);
	std::cout << "taste my fist" << std::endl;
}
void				ScavTrap::rangedAttack(std::string const & target)
{
	ClapTrap::rangedAttack(target);
	std::cout << "taste my flying fist" << std::endl;
}
void				ScavTrap::takeDamage(unsigned int amount)
{
	ClapTrap::takeDamage(amount);
	std::cout << "ScavTrap <" + this->name + "> am at " << this->hp << "hp" << std::endl;
}
void				ScavTrap::beRepaired(unsigned int amount)
{
	ClapTrap::beRepaired(amount);
	if (this->hp == this->max_hp)
		std::cout << "I am at max hp" << std::endl;
	else
		std::cout << "I am at <" << this->hp << ">\n";
}

void				ScavTrap::challengeNewcomer(std::string const & target)
{
	//we really shoudn't be seeding rand() everytime but for this it won't matter
	//since we're just printing strings we could just make an array of strings
	//and print the index -- would be easier to add to
	int		i = rand() % 5;
	std::cout << "Hey " + target + " :: ";
	if (i == 0)
		std::cout << "do the Ice bucket challenge how original" << std::endl;
	else if (i == 1)
		std::cout << "Say UwU whats this ? out loud" << std::endl;
	else if (i == 2)
		std::cout << "Call yourself Beutiful or Handsome" << std::endl;
	else if (i == 3)
		std::cout << "Tell yourself a secret" << std::endl;
	else if (i == 4)
		std::cout << "Slap yourself, unless your into that in which case don't(?)" << std::endl;
}

// -----------------------------------------------------------------------------

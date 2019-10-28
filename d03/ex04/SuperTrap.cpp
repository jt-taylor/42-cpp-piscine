#include "SuperTrap.hpp"

// -----------------------------------------------------------------------------
SuperTrap::SuperTrap()
{
}
SuperTrap::SuperTrap(std::string my_name) : FragTrap(my_name), NinjaTrap(my_name)
{
	this->hp = 100;
	this->max_hp = 100;
	this->ap = 100;
	this->max_ap = 100;
	this->level = 1;
	this->attack_damage = 30;
	this->ranged_damage = 20;
	this->armour = 5;
	this->name = name;
	srand(time(NULL));
	std::cout << "I got quests" << std::endl;
}
SuperTrap::SuperTrap(const SuperTrap & original) : ClapTrap(original)
{
	*this = original;
	std::cout << "Hey looke its me" << std::endl;
}
SuperTrap& SuperTrap::operator=(const SuperTrap & original)
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
SuperTrap::~SuperTrap()
{
	std::cout << "Away with thee" << std::endl;
}

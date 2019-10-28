#include <string>
#include <iostream>
#include "Pony.hpp"

/*
 * when to use stack vs heap
 *	when you have a large object that you can't or shoudn't move around
 *		use heap
 *	stack memory is much cheaper so if you have a large object
 *		you can pass the pointer to it around the stack but have the actual
 *		object never move
 */

int		main(void)
{
	std::cout << "Pony on stack" << std::endl;
	//on the stack
	Pony		dwarfy("dwarf", "dwarfy", "well how am i supposed to know that ?", "he has dwarfism so short stubby legs");
	std::cout << "Breed : " << dwarfy.breed << std::endl;
	std::cout << "Name : " << dwarfy.name << std::endl;
	std::cout << "Birthdate : " << dwarfy.birth_date << std::endl;
	std::cout << "Desc : " << dwarfy.desc << std::endl << std::endl;

	std::cout << "pony on the heap" << std::endl;
	//on the heap
	//in c++ we get to use new / delete
	//new allocates the memory && calls constructor
	//malloc just allocates memory
	//use delete instead of free
	Pony		*butt_stalion = new Pony("diamonds ?", "Butt Stalion", "the future i think", "from borderlands 2");
	std::cout << "Breed : " << butt_stalion->breed << std::endl;
	std::cout << "Name : " << butt_stalion->name << std::endl;
	std::cout << "Birthdate : " << butt_stalion->birth_date << std::endl;
	std::cout << "Desc : " << butt_stalion->desc << std::endl;
	delete butt_stalion;
}

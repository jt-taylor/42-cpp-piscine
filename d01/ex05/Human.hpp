#ifndef HUMAN_HPP
# define HUMAN_HPP

#include <string>
#include "Brain.hpp"

class Human
{
	public:
	Human();
	~Human();
	Brain		one_brain;
	std::string	identify();
	//this needs to be a reference to the to the brain in this
	//beacuse the main does this getBrain().identify
	Brain&		getBrain();
};

#endif

#include "Human.hpp"
#include "Brain.hpp"
#include <string>
#include <iostream>

//well this one was tricky but i think that i understand refernces now
int main()
{
	Human bob;
	std::cout << bob.identify() << std::endl;
	std::cout << bob.getBrain().identify() << std::endl;
}

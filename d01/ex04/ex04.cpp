#include <iostream>
#include <string>

int		main(void)
{
	//as a string
	std::string str = "HI THIS IS BRAIN";
	//as a pointer to a string
	std::string		*str_as_pointer = &str;
	//as a reference to a string
	std::string		&str_as_reference = str;

//	std::cout << "as a string     --> " << str << std::endl;
	std::cout << "as a pointer    --> " << *str_as_pointer << std::endl;
	std::cout << "as a reference  --> " << str_as_reference << std::endl;
}

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

Base* generator(void);
void		identify_from_pointer(Base * p);
void		identify_from_reference(Base & p);

int		main(void)
{
	srand(time(0));
	std::cout << "By pointer ::" << std::endl;
	Base *tmp = generator();
	identify_from_pointer(tmp);
	delete (tmp);
	tmp = generator();
	identify_from_pointer(tmp);
	delete (tmp);
	tmp = generator();
	identify_from_pointer(tmp);
	delete (tmp);
	tmp = generator();
	identify_from_pointer(tmp);
	delete (tmp);
	tmp = generator();
	identify_from_pointer(tmp);
	delete (tmp);
	tmp = generator();
	identify_from_pointer(tmp);
	delete (tmp);
	std::cout << std::endl << std::endl;
	std::cout << "By reference ::" << std::endl;
	tmp = generator();
	identify_from_reference(*tmp);
	delete (tmp);
	tmp = generator();
	identify_from_reference(*tmp);
	delete (tmp);
	tmp = generator();
	identify_from_reference(*tmp);
	delete (tmp);
	tmp = generator();
	identify_from_reference(*tmp);
	delete (tmp);
	tmp = generator();
	identify_from_reference(*tmp);
	delete (tmp);
	tmp = generator();
	identify_from_reference(*tmp);
	delete (tmp);
}

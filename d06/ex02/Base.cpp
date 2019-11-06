#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <ctime>
#include <cstdlib>
#include <iostream>

Base::~Base()
{
}

// this is to introduce dynamic casts
// make a random subclass
Base*		generator(void)
{
	Base * ret = NULL ;
	unsigned int tmp = rand() % 3;
	if (tmp == 0)
		ret = new A();
	else if (tmp == 1)
		ret = new B();
	else
		ret = new C();
	return (ret);
}

//dynamic casting a pointer can evaluate to a boolean
void		identify_from_pointer(Base * p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "Class type of 'A'" << std::endl;
	else if (dynamic_cast<B * >(p))
		std::cout << "Class type of 'B'" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "Class type of 'C'" << std::endl;
}

//so dy_cast from reference doesn'y convert to bool
//instead it throws exceptions if the cast fails
void		identify_from_reference(Base & p)
{
	Base tmp;
	try{
		tmp = dynamic_cast<A &>(p);
			std::cout << "Class type of 'A'" << std::endl;
	} catch (std::bad_cast e){}
	try{
		tmp = dynamic_cast<B &>(p);
			std::cout << "Class type of 'B'" << std::endl;
	} catch (std::bad_cast e){}
	try{
		tmp = dynamic_cast<C &>(p);
			std::cout << "Class type of 'C'" << std::endl;
	} catch (std::bad_cast e){}
}

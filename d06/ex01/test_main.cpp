#include <iostream>
#include <string>
#include <ctime>

struct Data
{
	std::string s1;
	int n;
	std::string s2;
};
struct Data;
Data * deserialize( void * raw );
void * serialize( void );

int		main(void)
{
	srand(time(0));
	void*	tmp = serialize();
	Data*	out = deserialize(tmp);

	std::cout << out->s1 << std::endl;
	std::cout << out->n << std::endl;
	std::cout << out->s2 << std::endl;
	delete out;
	return (0);
}


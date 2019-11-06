#include <iostream>
template <typename T>
void iter(T *addr, unsigned int size, void(*f)(const T &))
{
	if (size == 0)
	{
		std::cout << "array of zero size" << std::endl;
		return ;
	}
	if (addr == 0)
	{
		std::cout << "array pointer is null" << std::endl;
		return ;
	}
	for (unsigned int tmp = 0;tmp < size;tmp++)
	{
		f(addr[tmp]);
	}
}

template <typename T>
void	print_gen_value(const T & ref)
{
	if (ref)
		std::cout << ref << std::endl;
}

int		main(void)
{
	char carr[] = {"abcdefghij"};
	int  iarr[] = {1,2,3,4,5,6,7,8,9,10};
	double darr[] = {1.0,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9,10};
	std::cout << "Char array ::\n";
	iter(carr, sizeof(carr), &print_gen_value);
	std::cout << "Int array ::\n";
	iter(iarr, (sizeof(iarr) / sizeof(int)), &print_gen_value);
	std::cout << "Double array ::\n";
	iter(darr, (sizeof(darr) / sizeof(double)), &print_gen_value);
}

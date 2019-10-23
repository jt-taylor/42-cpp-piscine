#include <iostream>

/*
 * hey looks its str_toupper
 */

void	print_upper(int ac, char **argv)
{
	for (int i = 1; i < ac; i++)
		for (int j = 0; argv[i][j]; j++)
			std::cout << char(std::toupper(argv[i][j]));
	std::cout << std::endl;
}

int		main(int ac, char **argv)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else if (ac > 1)
		print_upper(ac, argv);
}

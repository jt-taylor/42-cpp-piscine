#include "FragTrap.hpp"

int		main(void)
{
	FragTrap		not_claptrap("'a good name'");
	not_claptrap.beRepaired(10);
	not_claptrap.takeDamage(10);
	not_claptrap.takeDamage(100);
	not_claptrap.beRepaired(30);
	not_claptrap.beRepaired(3);
	for (int i = 0;i < 5;i++)
		not_claptrap.vaulthunder_dot_exe("also not claptrap");
	std::cout << "\n\n";
	FragTrap		tmp1(not_claptrap);
	tmp1.beRepaired(50);
	std::cout << "\n\n";
	FragTrap&		tmp2 = tmp1;
	tmp2.takeDamage(105);
	not_claptrap.takeDamage(0);
}

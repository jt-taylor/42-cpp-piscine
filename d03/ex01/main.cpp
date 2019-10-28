#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int		main(void)
{
	std::cout << "FragTrap" << std::endl;
	std::cout << " ----------------------------------------------------------------" << std::endl;
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
	std::cout << " ----------------------------------------------------------------" << std::endl;
	std::cout << "ScavTrap" << std::endl;
	ScavTrap		slaptrap("'a good name'");
	slaptrap.beRepaired(10);
	slaptrap.takeDamage(10);
	slaptrap.takeDamage(100);
	slaptrap.beRepaired(30);
	slaptrap.beRepaired(3);
	for (int i = 0;i < 5;i++)
		slaptrap.challengeNewcomer("also not claptrap");
	std::cout << "\n\n";
	ScavTrap		tmp3(slaptrap);
	tmp3.beRepaired(50);
	std::cout << "\n\n";
	ScavTrap&		tmp4 = slaptrap;
	slaptrap.beRepaired(100);
	tmp4.takeDamage(105);
	slaptrap.takeDamage(6);
	slaptrap.takeDamage(3);
	return (0);
}

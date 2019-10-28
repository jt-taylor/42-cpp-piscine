#include <iostream>
#include <string>

/* run me like this
 * clang++ -std=c++98 -Wall -Wextra -Werror ex01.cpp test.cpp
 * ./a.out &
 * leaks a.out
 * then kill the process
 */

void	memoryLeak();

int		main(void)
{
	memoryLeak();
	while (1);
}

#ifndef ZOMBIE
# define ZOMBIE

#include <string>
#include <iostream>

class Zombie
{
	public:
		Zombie();
		~Zombie(void);
		void	announce(void);
		std::string type;
		std::string name;
	private:
};
#endif

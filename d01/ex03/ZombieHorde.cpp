#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n)
{
	this->for_announce = n;
	//allocate n zombie instances in one call
	this->horde_arr = new Zombie[n];

	for(int i = 0;i < n;i++)
	{
		this->horde_arr[i].name = rand_name();
		this->horde_arr[i].type = "Cannon Fodder";
	}
}

//we use delete [] beacuse we used new []
ZombieHorde::~ZombieHorde(void){
	delete[] this->horde_arr;
};

//i'd rather keep track of the numbers of zombies outside included
//outside of the horde , but i don't know if this is allowed parameter
void			ZombieHorde::announce()
{
	for(int i = 0; i < this->for_announce;i++)
		this->horde_arr[i].announce();
}

std::string		ZombieHorde::rand_name(void)
{
	int i = rand();
	std::string	tmp;

	i %= 13;
	if (i == 0)
		tmp = "Drekampbell";
	else if (i == 1)
		tmp = "Twinklekennedy";
	else if (i == 2)
		tmp = "Codazzle";
	else if (i == 3)
		tmp = "Titanreynolds";
	else if (i == 4)
		tmp = "Mitchellshark";
	else if (i == 5)
		tmp = "Ngugobblette";
	else if (i == 6)
		tmp = "Gardnereriona";
	else if (i == 7)
		tmp = "Silvermar";
	else if (i == 8)
		tmp = "Grayopogo";
	else if (i == 9)
		tmp = "Bigstone";
	else if (i == 10)
		tmp = "Coxbell";
	else if (i == 11)
		tmp = "Adath Wacoffin";
	else if (i == 12)
		tmp = "Bennettzuzu";
	else
		tmp = "????";
	return (tmp);
}

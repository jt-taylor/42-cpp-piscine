#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon
{
	public:
		Weapon(std::string);
		~Weapon();
		void				setType();
		const std::string&	getType();
		void				setType(std::string new_type);
	//because we made functions to interact with the type string we can make it private
	private:
		std::string			type;
};

#endif

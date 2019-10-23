#include "Contact.hpp"

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

void			Contact::fill_contact(int index)
{
	(void)index;
	int		i = 0;
	std::cout << "first name ?";
	std::getline(std::cin, this->list[i++]);
	while (this->list[0].empty())
	{
		std::cout << "first name is required please try again" << std::endl;
		std::cout << "first name ?" << std::endl;
		std::getline(std::cin, this->list[0]);
	}
	std::cout << "last name ?";
	std::getline(std::cin, this->list[i++]);
	std::cout << "nickname ?";
	std::getline(std::cin, this->list[i++]);
	std::cout << "login ?";
	std::getline(std::cin, this->list[i++]);
	std::cout << "postal address ? ";
	std::getline(std::cin, this->list[i++]);
	std::cout << "email address ? ";
	std::getline(std::cin, this->list[i++]);
	std::cout << "phone number ?";
	std::getline(std::cin, this->list[i++]);
	std::cout << "birthday dat ?";
	std::getline(std::cin, this->list[i++]);
	std::cout << "favorite meal ?";
	std::getline(std::cin, this->list[i++]);
	std::cout << "underwear color ?";
	std::getline(std::cin, this->list[i++]);
	std::cout << "darkest secret ?";
	std::getline(std::cin, this->list[i++]);
}

void			Contact::set_index(std::string str, int index)
{
	this->list[index] = str;
}


std::string		Contact::get_index(int index)
{
	return (this->list[index]);
}

void			Contact::print_contact_index(void)
{
	std::cout << "first name --> " +  this->get_index(0) << std::endl;
	std::cout << "last name --> " +  this->get_index(1) << std::endl;
	std::cout << "nickname --> " +  this->get_index(2) << std::endl;
	std::cout << "login --> " +  this->get_index(3) << std::endl;
	std::cout << "postal address --> " +  this->get_index(4) << std::endl;
	std::cout << "email address--> " +  this->get_index(5) << std::endl;
	std::cout << "phone number --> " +  this->get_index(6) << std::endl;
	std::cout << "birthday date --> " +  this->get_index(7) << std::endl;
	std::cout << "favorite meal --> " +  this->get_index(8) << std::endl;
	std::cout << "underwear color --> " +  this->get_index(9) << std::endl;
	std::cout << "darkest secret --> " +  this->get_index(10) << std::endl;
}

int			Contact::print_search(int i)
{
	std::string		fname = this->get_index(0);
	if (fname.empty())
		return 0;
	std::cout << std::setw(10) << i << "|";
	std::string		lname = this->get_index(1);
	std::string		nname = this->get_index(2);
	fname.length();

	if (!fname.empty())
		(fname.length() > 10) ? std::cout << std::setw(11) << fname.substr(0,8) + ".|" : std::cout << std::setw(11) << fname + "|" ;
	else
		std::cout << "          |";
	if (!lname.empty())
		(lname.length() > 10) ? std::cout << std::setw(11) << fname.substr(0,8) + ".|": std::cout << std::setw(11) << lname + "|" ;
	else
		std::cout << "          |";
	if (!nname.empty())
		(nname.length() > 10) ? std::cout << std::setw(11) << fname.substr(0,8) + ".|": std::cout << std::setw(11) << nname + "|";
	std::cout << std::endl;
	return (1);
}

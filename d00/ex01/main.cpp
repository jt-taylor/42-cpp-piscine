#include "Contact.hpp"
#include "iostream"

void			print_search(Contact phonbook[], int i);

int		main(void)
{
	int				i = 0;
	Contact			phonebook[8];
	std::cout << "Wow ,, even I'm impressed that I turned on" << std::endl;
	std::cout << "available commands\nADD\nSEARCH\nEXIT\n\n--\n\n";
	while (1)
	{
		std::string		input;
		std::getline(std::cin, input);
		if (input == "ADD")
		{
			if (i >= 8)
				std::cout << "PHONE Book full" << std::endl;
			else
			phonebook[i].fill_contact(i);
			i++;
		}
		else if (input == "EXIT")
			break ;
		else if (input == "SEARCH")
		{
			std::cout << "index     | firstname| last name|nickname  |" << std::endl;
			for (int j = 0; j < 8; j++)
				phonebook[j].print_search(j);
			std::cout << "Please enter your selection index" << std::endl;
			std::string tmp;
			std::getline(std::cin, tmp);
			/*
			 * im sure that there's a better way to do this but i don't know how,
			 * most of the following is so that it doesn't crash because std::stoi
			 * is picky
			 */
			size_t	l = tmp.empty() ? 9 : 0;
			while (l < (strlen(tmp.c_str())))
			{
				if ((isdigit(tmp.c_str()[l])))
					l++;
				else l = 100000;
			}
			if (l <= 8)
			{
				i = std::stoi(tmp);
				if (i >= 0 && i <= 8)
				{
					if (phonebook[i].get_index(0) != "")
						phonebook[i].print_contact_index();
					else
						std::cout << "invalid index ???" << std::endl;
				}
			}
			else
				std::cout << "please input a number\n-------" << std::endl;
		}
	}
	return (0);
}

#ifndef CLASS_CONTACT
# define CLASS_CONTACT

# include <string>
# include <iostream>
# include <iomanip>

class Contact
{
	private:
	public:
		std::string		list[11];
		Contact(void);
		~Contact(void);
		void			fill_contact(int index);
		void			set_index(std::string str, int index);
		std::string		get_index(int index);
		int			print_search(int i);
		void				print_contact_index(void);
};

#endif

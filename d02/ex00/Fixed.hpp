#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

/*
 * when to use copy vs assignment constuctors
 * use copy if a new object has to be created
 * use assignment if a new object does not need to made before copying
 */

class Fixed
{
	private:
		int					fixed_value;
		static const int	literal = 8;
	public:
		Fixed(void);
		//copy constuctor
		Fixed(const Fixed& copy);
		//assignation overload
		Fixed& operator= (const Fixed& as);
		~Fixed(void);


int			getRawBits(void) const;
void		setRawBits(int const raw);
};

#endif

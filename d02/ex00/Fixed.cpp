#include "Fixed.hpp"

Fixed::Fixed(void)
{
	this->fixed_value = 0;
	std::cout << "Default constructor called" << std::endl;
}
//copy
Fixed::Fixed(const Fixed& original)
{
	this->fixed_value = original.fixed_value;
	std::cout << "Copy constructor called" << std::endl;
}
//assignation
Fixed& Fixed::operator=(const Fixed& original)
{
	//
	this->fixed_value = original.getRawBits();
	std::cout << "Assignation constructor called" << std::endl;
	return *this;
}
Fixed::~Fixed()
{
	std::cout << "Deconstructor called" << std::endl;
}

int			Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixed_value);
}

void		Fixed::setRawBits(int const raw)
{
	this->fixed_value = raw;
}

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(void)
{
	this->fixed_value = 0;
	std::cout << "Default constructor called" << std::endl;
}
//int
// move the itn over by the fractional component
Fixed::Fixed(const int i)
{
	setRawBits(i << this->literal);
	std::cout << "Int constructor called" << std::endl;
}
//float
// multiply by 2^(fractional_bits)
// and round
Fixed::Fixed(const float f)
{
	this->fixed_value = roundf(f * (1 << this->literal));
	std::cout << "Int constructor called" << std::endl;
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
	this->fixed_value = original.getRawBits();
	std::cout << "Assignation constructor called" << std::endl;
	return *this;
}
Fixed::~Fixed()
{
	std::cout << "Deconstructor called" << std::endl;
}

//member functions

int			Fixed::getRawBits(void) const
{
//	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixed_value);
}

void		Fixed::setRawBits(int const raw)
{
	this->fixed_value = raw;
}

// move the bits back over
int			Fixed::toInt(void) const
{
	return ((int)getRawBits() >> this->literal);
}

//"undo" // divide by the fractional bits 2^(fractioanal bits)
float		Fixed::toFloat(void) const
{
	return ((float)getRawBits() / (1 << this->literal));
}

//why did it take me so long to get that this should be outside of the class
std::ostream&	operator<< (std::ostream &o, Fixed const &ref)
{
	return (o << ref.toFloat());
}

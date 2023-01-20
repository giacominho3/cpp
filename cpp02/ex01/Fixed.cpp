#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_value = 0;
}

Fixed::Fixed(const int n) : _value(n << _bits)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float fl) : _value(std::roundf(fl * ( 1 << _bits)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &f)
{
	std::cout << "Copy constructor called" << std::endl;
	this->setRawBits(f.getRawBits());
}

Fixed& Fixed::operator=(const Fixed &f)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &f)
		this->_value = f.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

float	Fixed::toFloat(void) const
{
	return static_cast<float>(this->getRawBits()) / (1 << _bits);
}

int		Fixed::toInt(void) const
{
	return this->_value >> _bits;
}

std::ostream& operator<<(std::ostream& os, Fixed const &f)
{
	os << f.toFloat();
	return os;
}
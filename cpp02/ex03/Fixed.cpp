#include "Fixed.hpp"

const int	Fixed::_bits = 8;

Fixed::Fixed()
{
	this->_value = 0;
}

Fixed::Fixed(const int n)
{
	this->_value = n * (1 << this->_bits);
	return ;
}

Fixed::Fixed(const float fl)
{
	this->_value = roundf(fl * (1 << _bits));
}

Fixed::Fixed(const Fixed &f)
{
	*this = f;
}

Fixed& Fixed::operator=(const Fixed &f)
{
	if (this == &f)
		return *(this);
	this->_value = f.getRawBits();
	return *(this);
}

Fixed::~Fixed()
{

}

int		Fixed::getRawBits(void) const
{
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

float	Fixed::toFloat(void) const
{
	return static_cast<float>((float)this->_value) / (float)(1 << _bits);
}

int		Fixed::toInt(void) const
{
	return (roundf(this->toFloat()));
}

std::ostream &operator<<(std::ostream &os, Fixed const &f)
{
	os << f.toFloat();
	return (os);
}

bool Fixed::operator>(const Fixed &f)
{
	return (this->getRawBits() > f.getRawBits());
}

bool Fixed::operator<(const Fixed &f)
{
	return (this->getRawBits() < f.getRawBits());
}

bool Fixed::operator>=(const Fixed &f)
{
	return (this->getRawBits() >= f.getRawBits());
}

bool Fixed::operator<=(const Fixed &f)
{
	return (this->getRawBits() <= f.getRawBits());
}

bool Fixed::operator==(const Fixed &f)
{
	return (this->getRawBits() == f.getRawBits());
}

bool Fixed::operator!=(const Fixed &f)
{
	return (this->getRawBits() != f.getRawBits());
}

Fixed Fixed::operator+(const Fixed &f)
{
	return (Fixed(this->toFloat() + f.toFloat()));
}

Fixed Fixed::operator-(const Fixed &f)
{
	return (Fixed(this->toFloat() - f.toFloat()));
}

Fixed Fixed::operator*(const Fixed &f)
{
	return (Fixed(this->toFloat() * f.toFloat()));
}

Fixed Fixed::operator/(const Fixed &f)
{
	return (Fixed(this->toFloat() / f.toFloat()));
}

Fixed& Fixed::operator++()
{
	this->_value += 1;
	return *(this);
}

Fixed& Fixed::operator--()
{
	this->_value -= 1;
	return *(this);
}

Fixed& Fixed::operator++(int)
{
	Fixed *tmp = this;
	this->_value += 1;
	return *(tmp);
}

Fixed& Fixed::operator--(int)
{
	Fixed *tmp = this;
	this->_value -= 1;
	return *(tmp);
}

Fixed& Fixed::min(Fixed &f1, Fixed &f2)
{
	if (f1.toFloat() < f2.toFloat())
		return (f1);
	else
		return (f2);
}

const Fixed& Fixed::min(const Fixed &f1, const Fixed &f2)
{
	if (f1.toFloat() < f2.toFloat())
		return (f1);
	else
		return (f2);
}

Fixed& Fixed::max(Fixed &f1, Fixed &f2)
{
	if (f1.toFloat() > f2.toFloat())
		return (f1);
	else
		return (f2);
}

const Fixed& Fixed::max(const Fixed &f1, const Fixed &f2)
{
	if (f1.toFloat() > f2.toFloat())
		return (f1);
	else
		return (f2);
}
#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <ostream>
#include <cmath>

class Fixed
{
	private:
	
	int					_value;
	static const int	_bits = 8;

	public:

	Fixed();
	Fixed(const int n);
	Fixed(const float fl);
	Fixed(const Fixed &f);
	Fixed& operator=(const Fixed &f);
	~Fixed();
	
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
};

std::ostream& operator<<(std::ostream& os, Fixed const &f);

#endif
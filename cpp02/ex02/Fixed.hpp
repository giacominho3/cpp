#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <ostream>
#include <cmath>

class Fixed
{
	private:
	
	int					_value;
	static const int	_bits;

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

	bool operator>(const Fixed &f);
	bool operator<(const Fixed &f);
	bool operator>=(const Fixed &f);
	bool operator<=(const Fixed &f);
	bool operator==(const Fixed &f);
	bool operator!=(const Fixed &f);

	Fixed operator+(const Fixed &f);
	Fixed operator-(const Fixed &f);
	Fixed operator*(const Fixed &f);
	Fixed operator/(const Fixed &f);

	Fixed& operator++();
	Fixed& operator--();
	Fixed& operator++(int);
	Fixed& operator--(int);

	static Fixed& min(Fixed &f1, Fixed &f2);
	const Fixed& min(const Fixed &f1, const Fixed &f2);
	static Fixed& max(Fixed &f1, Fixed &f2);
	const Fixed& max(const Fixed &f1, const Fixed &f2);
};

std::ostream& operator<<(std::ostream& os, Fixed const &f);

#endif
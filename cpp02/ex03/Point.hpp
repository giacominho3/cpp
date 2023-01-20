#ifndef POINT_HPP
#define POINT_HPP
#include "Fixed.hpp"

class Point
{
	private:

	const Fixed	_x;
	const Fixed	_y;

	public:

	Point();
	Point(const float f1, const float f2);
	Point(const Point &p);
	Point& operator=(const Point &f);
	~Point();

	Fixed getX() const;
	Fixed getY() const;
};

bool bsp(Point const a, Point const b, Point const c, Point const p);

#endif
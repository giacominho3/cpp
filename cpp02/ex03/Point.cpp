#include "Point.hpp"

Point::Point() : _x(0), _y(0)
{

}

Point::Point(const float f1, const float f2) : _x(f1), _y(f2)
{

}

Point::Point(const Point &p): _x(p._x), _y(p._y)
{

}

Point& Point::operator=(const Point &p)
{
	if (this != &p)
	{
		(Fixed)this->_x = p.getX();
		(Fixed)this->_y = p.getY();
	}
	return *(this);
}

Point::~Point()
{

}

Fixed Point::getX() const
{
	return (this->_x);
}

Fixed Point::getY() const
{
	return (this->_y);
}
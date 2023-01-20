#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const p)
{
	Fixed alpha = ((b.getY() - c.getY())*(p.getX() - c.getX()) + (c.getX() - b.getX())*(p.getY() - c.getY())) /
		((b.getY() - c.getY())*(a.getX() - c.getX()) + (c.getX() - b.getX())*(a.getY() - c.getY()));
	Fixed beta = ((c.getY() - a.getY())*(p.getX() - c.getX()) + (a.getX() - c.getX())*(p.getY() - c.getY())) /
		((b.getY() - c.getY())*(a.getX() - c.getX()) + (c.getX() - b.getX())*(a.getY() - c.getY()));
	Fixed gamma = Fixed(1) - alpha - beta;

	if (alpha > 0 && beta > 0 && gamma > 0)
		return (true);
	else
		return (false);
}
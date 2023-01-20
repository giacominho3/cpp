#include "Fixed.hpp"
#include "Point.hpp"

int	main()
{
	float	ax, ay, bx, by, cx, cy;
	float	px, py;
	
	std::cout << "Insert x of first triangle:" << std::endl;
	std::cin >> ax;
	std::cout << "Insert y of first triangle:" << std::endl;
	std::cin >> ay;
	std::cout << "Insert x of second triangle:" << std::endl;
	std::cin >> bx;
	std::cout << "Insert y of second triangle:" << std::endl;
	std::cin >> by;
	std::cout << "Insert x of third triangle:" << std::endl;
	std::cin >> cx;
	std::cout << "Insert y of third triangle:" << std::endl;
	std::cin >> cy;

	Point	a(ax, ay);
	Point	b(bx, by);
	Point	c(cx, cy);

	std::cout << "Insert x of triangle to test:" << std::endl;
	std::cin >> px;
	std::cout << "Insert y of triangle to test:" << std::endl;
	std::cin >> py;

	Point	p(px, py);

	if (bsp(a, b, c, p))
		std::cout << "Your point is in the triangle you defined :)" << std::endl;
	else
		std::cout << "Your point isn\'t in the triangle you defined :(" << std::endl;
}
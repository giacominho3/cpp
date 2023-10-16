#include "whatever.hpp"

int main(void) 
{
	int a = 4;
	int b = 2;

	std::cout << "a = " << a << ", b = " << b << std::endl;
	::swap(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "-------------------------------" << std::endl;
	std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
	std::cout << "-------------------------------" << std::endl;
	std::cout << "max(a, b) = " << ::max(a, b) << std::endl;
	std::cout << "-------------------------------" << std::endl;

	std::string s1 = "quarantadue";
	std::string s2 = "quarantaduf";

	std::cout << "s1 = " << s1 << ", s2 = " << s2 << std::endl;
	::swap(s1, s2);
	std::cout << "s1 = " << s1 << ", s2 = " << s2 << std::endl;
	std::cout << "min(s1, s2) = " << ::min(s1, s2) << std::endl;
	std::cout << "max(s1, s2) = " << ::max(s1, s2) << std::endl;
	
	return 0;
}
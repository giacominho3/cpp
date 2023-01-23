#include "Animal.hpp"

Animal::Animal()
{
	;
}

Animal::~Animal()
{
	;
}

void	Animal::makeSound()
{
	std::cout << "*random animal sound*" << std::endl;
}

std::string	Animal::getType()
{
	return (this->_type);
}

void	Animal::setType(std::string t)
{
	this->_type = t;
}
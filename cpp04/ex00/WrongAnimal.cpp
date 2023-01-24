#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	;
}

WrongAnimal::~WrongAnimal()
{
	;
}

void	WrongAnimal::makeSound()
{
	std::cout << "*probably a wrong animal*" << std::endl;
}

std::string	WrongAnimal::getType()
{
	return (this->_type);
}

void	WrongAnimal::setType(std::string t)
{
	this->_type = t;
}
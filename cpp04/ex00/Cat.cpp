#include "Cat.hpp"

Cat::Cat()
{
	this->_type = "Cat";
	this->setType("Cat");
}

Cat::~Cat()
{
	;
}

void	Cat::makeSound()
{
	std::cout << "Miao" << std::endl;
}
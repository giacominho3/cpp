#include "Cat.hpp"

Cat::Cat()
{
	this->_type = "Cat";
	this->setType("Cat");
	this->brain = new Brain();
	std::cout << "Calling cat constructor" << std::endl;
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Calling cat destructor" << std::endl;
}

void	Cat::makeSound()
{
	std::cout << "Miao" << std::endl;
}
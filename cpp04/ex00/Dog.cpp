#include "Dog.hpp"

Dog::Dog()
{
	this->_type = "Dog";
	this->setType("Dog");
}

void	Dog::makeSound()
{
	std::cout << "Bau" << std::endl;
}
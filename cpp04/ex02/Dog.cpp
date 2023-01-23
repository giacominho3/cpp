#include "Dog.hpp"

Dog::Dog()
{
	this->_type = "Dog";
	this->setType("Dog");
	this->brain =  new Brain();
	std::cout << "Calling dog constructor" << std::endl;
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Calling dog destructor" << std::endl;
}

void	Dog::makeSound()
{
	std::cout << "Bau" << std::endl;
}
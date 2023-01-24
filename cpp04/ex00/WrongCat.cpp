#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->_type = "WrongCat";
	this->setType("WrongCat");
}

WrongCat::~WrongCat()
{
	;
}

void	WrongCat::makeSound()
{
	std::cout << "Oaim" << std::endl;
}
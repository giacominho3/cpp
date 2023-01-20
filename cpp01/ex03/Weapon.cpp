#include <iostream>
#include "Weapon.hpp"

std::string	Weapon::getType() const
{
	return (this->_type);
}

void		Weapon::setType(std::string type)
{
	this->_type = type;
}

Weapon::Weapon()
{
	
}

Weapon::Weapon(std::string t)
{
	this->setType(t);
}
#include <iostream>
#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
	this->_weapon = NULL;
}

void	HumanB::attack()
{
	std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon& w)
{
	this->_weapon = &w;
}
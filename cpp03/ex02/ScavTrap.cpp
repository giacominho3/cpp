#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	this->_name = "*no-name*";
	this->_hp = 100;
	this->_ep = 50;
	this->_dmg = 20;
	this->setName("*no-name*");
	this->setHp(100);
	this->setEp(50);
	this->setDmg(20);
	std::cout << "ScavTrap " << this->_name << " initialized" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	this->_name = name;
	this->_hp = 100;
	this->_ep = 50;
	this->_dmg = 20;
	this->setName(name);
	this->setHp(100);
	this->setEp(50);
	this->setDmg(20);
	std::cout << "ScavTrap " << this->_name << " initialized" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &c)
{
	this->_name = c._name;
	this->_hp = c._hp;
	this->_ep = c._ep;
	this->_dmg = c._dmg;

	return *this;
}

ScavTrap::ScavTrap(const ScavTrap &c)
{
	*this = c;
	std::cout << "ScavTrap " << this->_name << " copy initialized" << std::endl;
	return;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->_name << " destroyed" << std::endl;;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode." << std::endl;;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->_ep && this->_hp)
	{
		std::cout << "ScavTrap " << this->_name << " attacks "<< target << ", causing " << this->_dmg << " points of damage!" << std::endl;
		this->_ep--;
	}
	else
		std::cout << "You have no energy to attack!" << std::endl;
}

void	ScavTrap::printStats()
{
	std::cout << "Name: " << this->_name << std::endl;
	std::cout << "Hp: " << this->_hp << std::endl;
	std::cout << "Ep: " << this->_ep << std::endl;
	std::cout << "Dmg: " << this->_dmg << std::endl;
}
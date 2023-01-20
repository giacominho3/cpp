#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	this->_name = "*no-name*";
	this->_hp = 100;
	this->_ep = 50;
	this->_dmg = 30;
	this->ClapTrap::setName(this->_name + "_clap_name");
	this->FragTrap::setHp(100);
	this->ScavTrap::setEp(50);
	this->FragTrap::setDmg(30);
	std::cout << "DiamondTrap " << this->_name << " initialized" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
{
	this->_name = name;
	this->_hp = 100;
	this->_ep = 50;
	this->_dmg = 30;
	this->setName(name + "_clap_name");
	this->setHp(100);
	this->setEp(50);
	this->setDmg(30);
	std::cout << "DiamondTrap " << this->_name << " initialized" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &c)
{
	this->_name = c._name;
	this->_hp = c._hp;
	this->_ep = c._ep;
	this->_dmg = c._dmg;

	return *this;
}

DiamondTrap::DiamondTrap(const DiamondTrap &c)
{
	*this = c;
	std::cout << "DiamondTrap " << this->_name << " copy initialized" << std::endl;
	return;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << this->_name << " destroyed" << std::endl;;
}

void	DiamondTrap::attack(const std::string& target)
{
	if (this->_ep && this->_hp)
	{
		std::cout << "DiamondTrap " << this->_name << " attacks "<< target << ", causing " << this->_dmg << " points of damage!" << std::endl;
		this->_ep--;
	}
	else
		std::cout << "You have no energy to attack!" << std::endl;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "My DT name is chakachaka: " << this->_name << " and my CT name is chakachaka: " << this->getName() << std::endl;
}

void	DiamondTrap::printStats()
{
	std::cout << "Name: " << this->_name << std::endl;
	std::cout << "Hp: " << this->_hp << std::endl;
	std::cout << "Ep: " << this->_ep << std::endl;
	std::cout << "Dmg: " << this->_dmg << std::endl;
}
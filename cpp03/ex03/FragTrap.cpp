#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	this->_name = "*no-name*";
	this->_hp = 100;
	this->_ep = 100;
	this->_dmg = 30;
	this->setName("*no-name*");
	this->setHp(100);
	this->setEp(100);
	this->setDmg(30);
	std::cout << "FragTrap " << this->_name << " initialized" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	this->_name = name;
	this->_hp = 100;
	this->_ep = 100;
	this->_dmg = 30;
	this->setName(name);
	this->setHp(100);
	this->setEp(100);
	this->setDmg(30);
	std::cout << "FragTrap " << this->_name << " initialized" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &c)
{
	this->_name = c._name;
	this->_hp = c._hp;
	this->_ep = c._ep;
	this->_dmg = c._dmg;

	return *this;
}

FragTrap::FragTrap(const FragTrap &c)
{
	*this = c;
	std::cout << "FragTrap " << this->_name << " copy initialized" << std::endl;
	return;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->_name << " destroyed" << std::endl;;
}

void	FragTrap::attack(const std::string& target)
{
	if (this->_ep && this->_hp)
	{
		std::cout << "FragTrap " << this->_name << " attacks "<< target << ", causing " << this->_dmg << " points of damage!" << std::endl;
		this->_ep--;
	}
	else
		std::cout << "You have no energy to attack!" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->_name << " requested a high five!" << std::endl;
}

void	FragTrap::printStats()
{
	std::cout << "Name: " << this->_name << std::endl;
	std::cout << "Hp: " << this->_hp << std::endl;
	std::cout << "Ep: " << this->_ep << std::endl;
	std::cout << "Dmg: " << this->_dmg << std::endl;
}
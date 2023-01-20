#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->_name = "*no-name*";
	this->_hp = 10;
	this->_ep = 10;
	this->_dmg = 0;
	std::cout << "ClapTrap " << this->_name << " initialized!" << std::endl;
}

ClapTrap::ClapTrap(std::string n)
{
	this->_name = n;
	this->_hp = 10;
	this->_ep = 10;
	this->_dmg = 0;
	std::cout << "ClapTrap " << this->_name << " initialized!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &ct)
{
	*this = ct;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &ct)
{
	if (this == &ct)
		return *(this);
	this->_name = ct._name;
	this->_hp = ct._hp;
	this->_ep = ct._ep;
	this->_dmg = ct._dmg;
	return *(this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->_name << " destroyed!" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_ep && this->_hp)
	{
		std::cout << "ClapTrap " << this->_name << " attacks "<< target << ", causing " << this->_dmg << " points of damage!" << std::endl;
		this->_ep--;
	}
	else
		std::cout << "You have no energy to attack!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hp)
		this->_hp -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_ep && this->_hp)
	{
		std::cout << "ClapTrap " << this->_name << " repaired " << amount << " hit points!" << std::endl;
		this->_hp += amount;
		this->_ep--;
	}
	else
		std::cout << "You have no energy to be repaired!" << std::endl;
}

std::string	ClapTrap::getName()
{
	return (this->_name);
}

void		ClapTrap::setName(std::string n)
{
	this->_name = n;
}

int			ClapTrap::getHp()
{
	return (this->_hp);
}

void		ClapTrap::setHp(int hp)
{
	this->_hp = hp;
}

int			ClapTrap::getEp()
{
	return (this->_ep);
}

void		ClapTrap::setEp(int ep)
{
	this->_ep = ep;
}

int			ClapTrap::getDmg()
{
	return (this->_dmg);
}

void		ClapTrap::setDmg(int dmg)
{
	this->_dmg = dmg;
}

void	ClapTrap::printStats()
{
	std::cout << "Name: " << this->_name << std::endl;
	std::cout << "Hp: " << this->_hp << std::endl;
	std::cout << "Ep: " << this->_ep << std::endl;
	std::cout << "Dmg: " << this->_dmg << std::endl;
}
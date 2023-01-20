#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>

class ClapTrap
{
	private:

	std::string	_name;
	int			_hp;
	int			_ep;
	int			_dmg;

	public:

	ClapTrap();
	ClapTrap(std::string n);
	ClapTrap(const ClapTrap &f);
	ClapTrap& operator=(const ClapTrap &f);
	~ClapTrap();
	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	void	printStats();
};

#endif
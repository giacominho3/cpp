#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
	private:

	std::string	_name;
	int			_hp;
	int			_ep;
	int			_dmg;

	public:

	ScavTrap();
	ScavTrap(const ScavTrap &s);
	ScavTrap(std::string n);
	virtual ~ScavTrap();

	ScavTrap& operator=(const ScavTrap &s);

	void	attack(const std::string& target);
	void	guardGate();

	void	printStats();
};

#endif
#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : virtual public FragTrap, virtual public ScavTrap
{
	std::string	_name;
	int			_hp;
	int			_ep;
	int			_dmg;

	public:

	DiamondTrap();
	DiamondTrap(const DiamondTrap &f);
	DiamondTrap(std::string n);
	virtual ~DiamondTrap();

	DiamondTrap& operator=(const DiamondTrap &f);

	void	attack(const std::string& target);
	void	whoAmI();

	void	printStats();
};

#endif
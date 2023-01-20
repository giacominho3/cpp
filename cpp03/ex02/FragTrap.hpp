#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	std::string	_name;
	int			_hp;
	int			_ep;
	int			_dmg;

	public:

	FragTrap();
	FragTrap(const FragTrap &f);
	FragTrap(std::string n);
	virtual ~FragTrap();

	FragTrap& operator=(const FragTrap &f);

	void	attack(const std::string& target);
	void	highFivesGuys(void);

	void	printStats();
};

#endif
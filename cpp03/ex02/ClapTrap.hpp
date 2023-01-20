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
	virtual ~ClapTrap();
	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	std::string	getName();
	void		setName(std::string n);
	int			getHp();
	void		setHp(int hp);
	int			getEp();
	void		setEp(int ep);
	int			getDmg();
	void		setDmg(int dmg);

	void	printStats();
};

#endif
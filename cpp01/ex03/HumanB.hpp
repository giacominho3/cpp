#ifndef HUMAN_B
#define HUMAN_B

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	private:

	std::string	_name;
	Weapon*		_weapon;

	public:

	HumanB(std::string name);
	void	attack();
	void	setWeapon(Weapon& w);
};

#endif
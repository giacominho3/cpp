#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>

class Weapon
{
	private:

	std::string	_type;

	public:

	std::string	getType() const;
	void		setType(std::string type);
	Weapon();
	Weapon(std::string t);
};

#endif
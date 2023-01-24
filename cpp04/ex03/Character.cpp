#include "Character.hpp"

Character::Character()
{
	;
}

Character::Character(std::string const & name)
{
	this->_name = name;
	for(int i = 0; i < 4; i++)
		this->_slot[i] = NULL;
}

Character::Character(Character &cs)
{
	*this = cs;
	this->_name = cs.getName();
}

Character::~Character()
{
	for(int i = 0; i < 4; i++)
		if(_slot[i])
		delete _slot[i];
}

Character &Character::operator=(Character &cs)
{
	this->_name = cs._name;
	for(int i = 0; i < 4; i++)
	{
		delete this->_slot[i];
		this->_slot[i] = cs._slot[i];
	}
	return (*this);
}

std::string const & Character::getName() const
{
	return this->_name;
}

void	Character::setname(std::string name)
{
	this->_name = name;
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
		if(!_slot[i])
		{
			_slot[i] = m;
			return ;
		}
	std::cout << "Inventory full!" << std::endl;
}

void Character::unequip(int idx)
{
	if (!_slot[idx])
	{
		std::cout << "Empty slot" << std::endl;
		return ;
	}
	_slot[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (_slot[idx])
		_slot[idx]->use(target);
	return ;
}

void	Character::printSlot()
{
	for (int i = 0; this->_slot[i]; i++)
		std::cout << this->_slot[i]->getType() << std::endl;
}

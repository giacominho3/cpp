#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

class Animal
{
	protected:

	std::string	_type;

	public:

	Animal();
	virtual ~Animal();

	std::string		getType();
	void			setType(std::string t);
	virtual void	makeSound();
};

#endif
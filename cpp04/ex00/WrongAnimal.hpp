#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>

class WrongAnimal
{
	protected:

	std::string	_type;

	public:

	WrongAnimal();
	~WrongAnimal();

	std::string		getType();
	void			setType(std::string t);
	virtual void	makeSound();
};

#endif
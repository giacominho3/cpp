#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"

class Dog : public Animal
{
	protected:

	std::string	_type;

	public:

	Dog();
	void		makeSound();
};

#endif
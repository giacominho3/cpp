#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:

	Brain	*brain;

	protected:

	std::string	_type;

	public:

	Dog();
	~Dog();
	void		makeSound();
};

#endif
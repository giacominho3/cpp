#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"

class Cat : public Animal
{
	protected:

	std::string	_type;

	public:

	Cat();

	void	makeSound();
};

#endif
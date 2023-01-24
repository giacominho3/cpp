#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	protected:

	std::string	_type;

	public:

	WrongCat();
	~WrongCat();

	void	makeSound();
};

#endif
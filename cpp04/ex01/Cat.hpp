#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:

	Brain	*brain;

	protected:

	std::string	_type;

	public:

	Cat();
	~Cat();

	void	makeSound();
};

#endif
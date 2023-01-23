#include "Brain.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main()
{
	const Animal *array[4];
	for (int i = 0; i < 4; i++)
	{
		std::cout << i + 1 << "° animal" << std::endl;
		if (i % 2 == 0)
			array[i] = new Dog();
		else
			array[i] = new Cat();
	}

	std::cout << std::endl;

	for (int i = 0; i < 4; i++)
	{
		std::cout << i + 1 << "° animal" << std::endl;
		delete array[i];
	}

	return 0;
}
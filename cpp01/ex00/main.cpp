#include "Zombie.hpp"

int	main()
{
	std::string name;

	std::cout << "Creating zombie on the heap" << std::endl;
	std::cout << "Insert zombie name: " << std::flush;
	std::cin >> name;

	Zombie *z = newZombie(name);
	z->announce();
	delete (z);

	std::cout << "Creating zombie on the stack" << std::endl;
	std::cout << "Calling randomChump" << std::endl;
	randomChump("Jeff");
	return (0);
}
#include "Zombie.hpp"

int	main()
{
	Zombie	*zombies = zombieHorde(5, "Kevin");
	int		i = 0;

	while (i < 5)
	{
		zombies[i].announce();
		i++;
	}
	delete[] zombies;
}
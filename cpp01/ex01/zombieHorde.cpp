#include "Zombie.hpp"
#include <vector>

Zombie* zombieHorde(int N, std::string name)
{
	Zombie *zombies = new Zombie[N];
	int					i = 0;

	while (i < N)
	{
		zombies[i] = Zombie(name);
		i++;
	}
	return (zombies);
}
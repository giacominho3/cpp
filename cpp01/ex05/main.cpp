#include "Harl.hpp"

int	main()
{
	std::string	levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	Harl		harl = Harl();

	for (int i = 0; i < 4; i++)
	{
		harl.complain(levels[i]);
	}
}
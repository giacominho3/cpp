#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl		harl = Harl();
	std::string	input = argv[1];

	if (argc != 2)
	{
		std::cout << "Parameters are not correct!" << std::endl;
		return (1);
	}

	harl.complain(input);
}
#include <iostream>

int main (int argc, char **argv)
{
	int 	i = 1;
	int 	j = 0;
	char 	tmp = 0;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (argv[i])
		{
			while (argv[i][j] != '\0')
			{
				tmp = toupper(argv[i][j]);
				std::cout << tmp;
				j++;
			}
			j = 0;
			i++;
		}
		std::cout << std::endl;
	}
	return (0);
}
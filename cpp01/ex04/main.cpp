#include <iostream>
#include <fstream>

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Error in program parameters!" << std::endl;
		return (1);
	}

	std::string		filename = argv[1];
	std::string		to_find = argv[2];
	std::string		to_replace = argv[3];
	std::string		buff;
	int				pos;

	std::ifstream	file_str(filename);
	std::ofstream	new_file("new_file.txt");

	if (!file_str)
	{
		std::cout << "Error opening file!" << std::endl;
		return (1);
	}

	while (getline(file_str, buff))
	{
		std::cout << "buff: " << buff << std::endl;
		pos = buff.find(to_find);
		while (pos != -1)
		{
			std::cout << "pos: " << pos << std::endl;
			buff.erase(pos, to_find.size());
			std::cout << "buff: " << buff << std::endl;
			buff.insert(pos, to_replace);
			std::cout << "buff: " << buff << std::endl;
			pos = buff.find(to_find);
		}
		new_file << buff;
		if (file_str.peek() != EOF)
			new_file << '\n';
	}
	new_file.close();
	file_str.close();
	return (0);
}
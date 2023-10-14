#include "Serializer.hpp"
#include "Data.hpp"

#include <iostream>
#include <cstdint>

int main()
{
	Data d = {"random"};
	Serializer s = Serializer();

	Data *nd = s.deserialize(s.serialize(&d));

	if (nd == &d)
		std::cout << "DAJE" << std::endl;
	else
		std::cout << "NON DAJE" << std::endl;

}
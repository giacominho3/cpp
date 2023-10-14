#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include "Data.hpp"
#include <cstdint>

class Serializer
{
	public:

		Serializer();
		Serializer(const Serializer& sc);
		Serializer& operator=(const Serializer& sc);
		~Serializer();

		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);

};

#endif
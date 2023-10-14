#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <string>

class ScalarConverter
{
	public:

		ScalarConverter();
		ScalarConverter(const ScalarConverter& sc);
		ScalarConverter& operator=(const ScalarConverter& sc);
		~ScalarConverter();

		static void convert(const std::string& str);
};

#endif
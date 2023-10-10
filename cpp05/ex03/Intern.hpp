#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include <iostream>
#include <map>

class Intern
{
	private:
	std::map<std::string, AForm *> _forms;

	public:

	Intern();
    Intern(Intern const &oldIntern);
	Intern &operator=(Intern const &toCopy);
    ~Intern();

	AForm *makeForm(std::string name, std::string target);

	class NoSuchFormFound: public std::exception 
    {
        public:
            virtual const char *what() const throw();
    };
};

#endif
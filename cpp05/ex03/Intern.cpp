#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern()
{
	this->_forms["shrubbery"] = new ShrubberyCreationForm();
	this->_forms["robotomy"] = new RobotomyRequestForm();
	this->_forms["presidential"] = new PresidentialPardonForm();
}

Intern::Intern(Intern const &oldIntern)
{
	*this = oldIntern;
}

Intern &Intern::operator=(Intern const &toCopy)
{
	*this = toCopy;
    return(*this);
}

Intern::~Intern()
{
	delete this->_forms.at("shrubbery");
	delete this->_forms.at("robotomy");
	delete this->_forms.at("presidential");
}

AForm *Intern::makeForm(std::string name, std::string target)
{
	if (this->_forms.find(name) != this->_forms.end())
	{
		this->_forms[name]->setTarget(target);
		return this->_forms[name];
	}
	else
		throw NoSuchFormFound();
}

const char *Intern::NoSuchFormFound::what(void) const throw()
{
    return("The form name you inserted does not exist");
} 

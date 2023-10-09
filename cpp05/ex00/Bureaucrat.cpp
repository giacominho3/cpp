#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat():_name("none")
{
    this->_grade = 150;
	std::cout << "Default Constructor Called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string n, int g):_name(n)
{
    if (g < 1)
        throw Bureaucrat::GradeTooHighException();
    if (g > 150)
        throw  Bureaucrat::GradeTooLowException();
    this->_grade = g;
	std::cout << "Parameter Constructor Called" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src) 
{
    *this = src;
	std::cout << "Copy Constructor Called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor Called" << std::endl;;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & obj) 
{
    if (obj._grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (obj._grade > 150)
        throw  Bureaucrat::GradeTooLowException();
    this->_grade = obj._grade;
    return *this;
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const & obj) 
{
    o << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".";
    return o;
}

std::string Bureaucrat::getName() const 
{
    return this->_name;
}

int Bureaucrat::getGrade() const 
{
    return this->_grade;
}

void Bureaucrat::incrementGrade() 
{
    this->_grade--;
    if (this->_grade < 1)
        throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrementGrade() 
{
    this->_grade++;
    if (this->_grade > 150)
        throw  Bureaucrat::GradeTooLowException();
}

const char * Bureaucrat::GradeTooLowException::what() const throw() 
{
    return ("Grade is too low, insert a value between 1 and 150");
}

const char * Bureaucrat::GradeTooHighException::what() const throw() 
{
    return ("Grade is too high, insert a value between 1 and 150");
}
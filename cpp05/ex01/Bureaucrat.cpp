#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat():_name("Random Bureaucrat")
{
    this->_grade = 150;
    std::cout << "Default Constructor Called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string n, int g):_name(n)
{
    if (g < 1)
        throw GradeTooHighException();
    else if (g > 150)
        throw GradeTooLowException();
    else 
        this->_grade = g;
    std::cout << "Parameter Constructor Called" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &oldBureaucrat) 
{
    *this = oldBureaucrat;
    std::cout << "Copy Constructor Called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Destructor Called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &toCopy)
{
    this->_grade = toCopy._grade;
    return(*this);
}

std::ostream &operator<<(std::ostream &stream, Bureaucrat const &bCrat) 
{
    stream << "Bureaucrat: " << bCrat.getName() << " - Official Grade: " << bCrat.getGrade() << std::endl;
    return(stream);
}

int Bureaucrat::getGrade(void) const 
{
    return(this->_grade);
}

std::string Bureaucrat::getName(void) const 
{
    return(this->_name);
}

void Bureaucrat::incrementGrade(void) 
{
    if (_grade == 1)
        throw GradeTooHighException();
    else
        this->_grade--;
}

void Bureaucrat::decrementGrade(void) 
{
    if (_grade == 150)
        throw GradeTooLowException();
    else
        this->_grade++;
}

void	Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
}

const char *Bureaucrat::GradeTooLowException::what(void) const throw()
{
    return("Grade is too low, insert a value between 1 and 150");
} 

const char *Bureaucrat::GradeTooHighException::what(void) const throw()
{
    return("Grade is too high, insert a value between 1 and 150");
}
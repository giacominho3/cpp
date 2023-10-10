#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat():_name("Random Bureaucrat")
{
    this->_grade = 150;
}

Bureaucrat::Bureaucrat(const std::string n, int g):_name(n)
{
    if (g < 1)
        throw GradeTooHighException();
    else if (g > 150)
        throw GradeTooLowException();
    else 
        this->_grade = g;
}

Bureaucrat::Bureaucrat(Bureaucrat const &oldBureaucrat) 
{
    *this = oldBureaucrat;
}

Bureaucrat::~Bureaucrat()
{
	;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &toCopy)
{
    this->_grade = toCopy._grade;
    return(*this);
}

std::ostream &operator<<(std::ostream &stream, Bureaucrat const &bCrat) 
{
    stream << "Bureaucrat: " << bCrat.getName() << " - Grade: " << bCrat.getGrade() << std::endl;
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

void	Bureaucrat::signForm(AForm &form)
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

void	Bureaucrat::executeForm(AForm const & form)
{
	try
	{
		form.execute(*this);
		std::cout << this->_name << " executed " << form.getName() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << this->_name << " couldn't execute " << form.getName() << ", grade too low" << std::endl;
	}
	
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

const char *Bureaucrat::GradeTooLowException::what(void) const throw()
{
    return("Grade is too low, insert a value between 1 and 150");
} 

const char *Bureaucrat::GradeTooHighException::what(void) const throw()
{
    return("Grade is too high, insert a value between 1 and 150");
}
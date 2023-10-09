#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Shrubbery Creation Form", 145, 137)
{
    this->_target = "Dummy";
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string t) : AForm("Shrubbery Creation Form", 145, 137)
{
	this->_target = t;
    std::cout << this->_name << " created with " << this->_target << " as its target" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &oldPPF):AForm()
{
    *this = oldPPF;
}

ShrubberyCreationForm::~ShrubberyCreationForm() 
{
    ;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &toCopy) 
{
    this->_name = toCopy._name;
    this->_isSigned = toCopy._isSigned;
    this->_gToSign = toCopy._gToSign;
    this->_gToExec = toCopy._gToExec;
    return (*this);
}

std::ostream &operator<<(std::ostream &stream, ShrubberyCreationForm const &obj)
{
	stream << obj.getName() << std::endl;
	stream << "Status: " << obj.isSigned() << std::endl;
	stream << "Grade to sign: " << obj.getSignGrade() << std::endl;
	stream << "Grade to execute: " << obj.getExecGrade() << std::endl;
	stream << "Target: " << obj.getTarget() << std::endl;
	return (stream);
}

std::string ShrubberyCreationForm::getName(void) const 
{
    return (this->_name);
}

int ShrubberyCreationForm::getSignGrade(void) const 
{
    return (this->_gToSign);
}

int ShrubberyCreationForm::getExecGrade(void) const 
{
    return (this->_gToExec);
}

std::string ShrubberyCreationForm::getTarget(void) const 
{
    return (this->_target);
}

std::string ShrubberyCreationForm::isSigned(void) const 
{
    if (_isSigned)
        return("True");
    else
        return("False");
}

void ShrubberyCreationForm::beSigned(Bureaucrat const &bcrat) 
{
   if (this->_isSigned == true)
        std::cout << "This form is already signed" << std::endl;
    else if (this->_gToSign >= bcrat.getGrade())
	{
        std::cout << "Bureaucrat " << bcrat.getName() << " isn't important enough to sign this SCF" << std::endl;
        throw GradeTooLowException();
    }
    else 
    {
        this->_isSigned = true;
        std::cout << "Bureaucrat " << bcrat.getName() << " has signed the " << this->_name << std::endl;
    }
        
}

const char *ShrubberyCreationForm::GradeTooLowException::what(void) const throw()
{
    return("Bureaucrat's grade is too low, SCF can't be signed");
} 

const char *ShrubberyCreationForm::GradeTooHighException::what(void) const throw()
{
    return("Bureaucrat's grade is too low, SCF can't be signed");
}

const char *ShrubberyCreationForm::ShrubberyException::what(void) const throw()
{
    return("This SCF can't be executed by this Bureaucrat, grade too low");
}

void ShrubberyCreationForm::execute(const Bureaucrat & executor) const
{
	if (this->_isSigned == true && executor.getGrade() <= this->_gToExec)
	{
		std::ofstream ppfFile("_shrubbery.txt");
		ppfFile << "a tree is in here";
		ppfFile.close();
	}
	else
		throw AForm::GradeTooLowException();
}
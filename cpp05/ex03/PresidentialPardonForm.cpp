#include "PresidentialPardonForm.hpp"
#include <fstream>

PresidentialPardonForm::PresidentialPardonForm():AForm("Presidential Pardon Form", 25, 5)
{
	this->_target = "Dummy";
}

PresidentialPardonForm::PresidentialPardonForm(std::string t) : AForm("Presidential Pardon Form", 25, 5)
{
	this->_name = "Presidential Pardon Form";
	this->_gToSign = 25;
	this->_gToExec = 5;
    this->_target = t;
    std::cout << this->_name << " created with " << this->_target << " as its target" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &oldPPF):AForm()
{
    *this = oldPPF;
}

PresidentialPardonForm::~PresidentialPardonForm() 
{
	;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &toCopy) 
{
    this->_name = toCopy._name;
    this->_isSigned = toCopy._isSigned;
    this->_gToSign = toCopy._gToSign;
    this->_gToExec = toCopy._gToExec;
    return (*this);
}

std::ostream &operator<<(std::ostream &stream, PresidentialPardonForm const &obj)
{
	stream << obj.getName() << std::endl;
	stream << "Status: " << obj.isSigned() << std::endl;
	stream << "Grade to sign: " << obj.getSignGrade() << std::endl;
	stream << "Grade to execute: " << obj.getExecGrade() << std::endl;
	stream << "Target: " << obj.getTarget() << std::endl;
	return (stream);
}

std::string PresidentialPardonForm::getName(void) const 
{
    return (this->_name);
}

int PresidentialPardonForm::getSignGrade(void) const 
{
    return (this->_gToSign);
}

int PresidentialPardonForm::getExecGrade(void) const 
{
    return (this->_gToExec);
}

std::string PresidentialPardonForm::getTarget(void) const 
{
    return (this->_target);
}

void PresidentialPardonForm::setTarget(std::string t)
{
	this->_target = t;
}

std::string PresidentialPardonForm::isSigned(void) const 
{
    if (_isSigned)
        return("True");
    else
        return("False");
}

void PresidentialPardonForm::beSigned(Bureaucrat const &bcrat) 
{
   if (this->_isSigned == true)
        std::cout << "This form is already signed" << std::endl;
    else if (this->_gToSign <= bcrat.getGrade())
	{
        std::cout << "Bureaucrat " << bcrat.getName() << " isn't important enough to sign this PPF" << std::endl;
        throw GradeTooLowException();
    }
    else 
    {
        this->_isSigned = true;
        std::cout << "Bureaucrat " << bcrat.getName() << " has signed the " << this->_name << std::endl;
    }
        
}

const char *PresidentialPardonForm::GradeTooLowException::what(void) const throw()
{
    return("Bureaucrat's grade is too low, PPF can't be signed");
} 

const char *PresidentialPardonForm::GradeTooHighException::what(void) const throw()
{
    return("Bureaucrat's grade is too low, PPF can't be signed");
}

const char *PresidentialPardonForm::PresidentialException::what(void) const throw()
{
    return("This PPF can't be executed by this Bureaucrat, grade too low");
}

void PresidentialPardonForm::execute(const Bureaucrat & executor) const
{
	if (this->_isSigned == true && executor.getGrade() <= this->_gToExec)
		std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
	else
		throw PresidentialException();
}
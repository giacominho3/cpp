#include "AForm.hpp"

AForm::AForm()
{
    this->_name = "Unknown Form";
    this->_isSigned = false;
    this->_gToSign = 150;
    this->_gToExec = 150;
}

AForm::AForm(const std::string n, int sg, int eg)
{
    this->_name = n;
    this->_isSigned = false;
    if (sg < 1 || eg < 1)
        throw GradeTooHighException();
    else if (sg > 150 || eg > 150)
        throw GradeTooLowException();
    else {
        this->_gToSign = sg;
        this->_gToExec = eg;
        std::cout << "Custom Form " << this->_name << " created" << std::endl;
    }
}

AForm::AForm(AForm const &oldForm)
{
    *this = oldForm;
}

AForm::~AForm() 
{
    ;
}

AForm &AForm::operator=(AForm const &toCopy) 
{
    this->_name = toCopy._name;
    this->_isSigned = toCopy._isSigned;
    this->_gToSign = toCopy._gToSign;
    this->_gToExec = toCopy._gToExec;
    return (*this);
}

std::ostream &operator<<(std::ostream &stream, AForm const &obj)
{
	stream << "Form: " << obj.getName() << std::endl;
	stream << "Status: " << obj.isSigned() << std::endl;
	stream << "Grade to sign: " << obj.getSignGrade() << std::endl;
	stream << "Grade to execute: " << obj.getExecGrade() << std::endl;
	return (stream);
}

std::string AForm::getName(void) const 
{
    return (this->_name);
}

int AForm::getSignGrade(void) const 
{
    return (this->_gToSign);
}

int AForm::getExecGrade(void) const 
{
    return (this->_gToExec);
}

std::string AForm::isSigned(void) const 
{
    if (_isSigned)
        return("True");
    else
        return("False");
}

const char *AForm::GradeTooLowException::what(void) const throw()
{
    return("Bureaucrat's grade is too low, form can't be signed");
} 

const char *AForm::GradeTooHighException::what(void) const throw()
{
    return("Bureaucrat's grade is too low, form can't be signed");
}
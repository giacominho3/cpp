#include "Form.hpp"

Form::Form()
{
    this->_name = "Unknown Form";
    this->_isSigned = false;
    this->_gToSign = 150;
    this->_gToExec = 150;
    std::cout << "Default form constructor called, base level form created" << std::endl;
}

Form::Form(const std::string n, int sg, int eg)
{
    this->_name = n;
    this->_isSigned = false;
    if (sg < 1 || eg < 1)
        throw GradeTooHighException();
    else if (sg > 150 || eg > 150)
        throw GradeTooLowException();
    else if (sg > eg)
        throw GradeTooHighException();
    else {
        this->_gToSign = sg;
        this->_gToExec = eg;
        std::cout << "Custom Form " << this->_name << " created" << std::endl;
    }
}

Form::Form(Form const &oldForm)
{
    *this = oldForm;
    std::cout << "Form Copy Constructor Called" << std::endl;
}

Form::~Form() 
{
    std::cout << this->_name << " Form Destructor Called" << std::endl;
}

Form &Form::operator=(Form const &toCopy) 
{
    this->_name = toCopy._name;
    this->_isSigned = toCopy._isSigned;
    this->_gToSign = toCopy._gToSign;
    this->_gToExec = toCopy._gToExec;
    return (*this);
}

std::ostream &operator<<(std::ostream &stream, Form const &obj)
{
	stream << "Form: " << obj.getName() << std::endl;
	stream << "Status: " << obj.isSigned() << std::endl;
	stream << "Grade to sign: " << obj.getSignGrade() << std::endl;
	stream << "Grade to execute: " << obj.getExecGrade() << std::endl;
	return (stream);
}

std::string Form::getName(void) const 
{
    return (this->_name);
}

int Form::getSignGrade(void) const 
{
    return (this->_gToSign);
}

int Form::getExecGrade(void) const 
{
    return (this->_gToExec);
}

std::string Form::isSigned(void) const 
{
    if (_isSigned)
        return("True");
    else
        return("False");
}

void Form::beSigned(Bureaucrat const &bcrat) 
{
   if (this->_isSigned == true)
        std::cout << "This form is already signed" << std::endl;
    else if (this->_gToSign >= bcrat.getGrade())
	{
        std::cout << "Bureaucrat " << bcrat.getName() << " isn't important enough to sign " << this->getName() << std::endl;
        throw GradeTooLowException();
    }
    else 
    {
        this->_isSigned = true;
        std::cout << "Bureaucrat " << bcrat.getName() << " signed " << this->_name << " form" << std::endl;
    }
        
}

const char *Form::GradeTooLowException::what(void) const throw()
{
    return("Bureaucrat's grade is too low, form can't be signed");
} 

const char *Form::GradeTooHighException::what(void) const throw()
{
    return("Bureaucrat's grade is too low, form can't be signed");
} 
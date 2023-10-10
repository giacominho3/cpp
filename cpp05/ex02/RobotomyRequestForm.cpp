#include "RobotomyRequestForm.hpp"
#include <fstream>

RobotomyRequestForm::RobotomyRequestForm():AForm("Robotomy Request Form", 72, 45)
{
	this->_target = "Dummy";
}

RobotomyRequestForm::RobotomyRequestForm(const std::string t):AForm("Robotomy Request Form", 72, 45)
{
	this->_name = "Robotomy Request Form";
	this->_gToSign = 72;
	this->_gToExec = 45;
	this->_target = t;
    std::cout << this->_name << " created with " << this->_target << " as its target" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &oldPPF):AForm()
{
    *this = oldPPF;
}

RobotomyRequestForm::~RobotomyRequestForm() 
{
    ;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &toCopy) 
{
    this->_name = toCopy._name;
    this->_isSigned = toCopy._isSigned;
    this->_gToSign = toCopy._gToSign;
    this->_gToExec = toCopy._gToExec;
    return (*this);
}

std::ostream &operator<<(std::ostream &stream, RobotomyRequestForm const &obj)
{
	stream << obj.getName() << std::endl;
	stream << "Status: " << obj.isSigned() << std::endl;
	stream << "Grade to sign: " << obj.getSignGrade() << std::endl;
	stream << "Grade to execute: " << obj.getExecGrade() << std::endl;
	stream << "Target: " << obj.getTarget() << std::endl;
	return (stream);
}

std::string RobotomyRequestForm::getName(void) const 
{
    return (this->_name);
}

int RobotomyRequestForm::getSignGrade(void) const 
{
    return (this->_gToSign);
}

int RobotomyRequestForm::getExecGrade(void) const 
{
    return (this->_gToExec);
}

std::string RobotomyRequestForm::getTarget(void) const 
{
    return (this->_target);
}

std::string RobotomyRequestForm::isSigned(void) const 
{
    if (_isSigned)
        return("True");
    else
        return("False");
}

void RobotomyRequestForm::beSigned(Bureaucrat const &bcrat) 
{
   if (this->_isSigned == true)
        std::cout << "This form is already signed" << std::endl;
    else if (this->_gToSign <= bcrat.getGrade())
	{
        std::cout << "Bureaucrat " << bcrat.getName() << " isn't important enough to sign this RRF" << std::endl;
        throw GradeTooLowException();
    }
    else 
    {
        this->_isSigned = true;
        std::cout << "Bureaucrat " << bcrat.getName() << " has signed the " << this->_name << std::endl;
    }
        
}

const char *RobotomyRequestForm::GradeTooLowException::what(void) const throw()
{
    return("Bureaucrat's grade is too low, RRF can't be signed");
} 

const char *RobotomyRequestForm::GradeTooHighException::what(void) const throw()
{
    return("Bureaucrat's grade is too low, RRF can't be signed");
}

const char *RobotomyRequestForm::RobotomyException::what(void) const throw()
{
    return("This RRF can't be executed by this Bureaucrat, grade too low");
}

void RobotomyRequestForm::execute(const Bureaucrat & executor) const
{
	static int times = 0;

	if (this->_isSigned == true && executor.getGrade() <= this->_gToExec)
	{
		std::cout << "Drilling noises are being made..." << std::endl;
		if (times % 2 == 0)
			std::cout << this->getTarget() << " has been robotomized successfully!" << std::endl;
		else
			std::cout << "Robotomy on " << this->getTarget() << " failed drastically" << std::endl;
		times++;
	}
	else
		throw RobotomyException();
}
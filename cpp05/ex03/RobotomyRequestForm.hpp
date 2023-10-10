#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	private:

		std::string	_name;
        bool        _isSigned;
        int			_gToSign;
        int			_gToExec;
		std::string _target;
		
	public:

        RobotomyRequestForm();
        RobotomyRequestForm(const std::string t);
        RobotomyRequestForm(RobotomyRequestForm const &oldPPF);
       
        ~RobotomyRequestForm();
        
        RobotomyRequestForm &operator=(RobotomyRequestForm const &toCopy);
        
        std::string getName(void) const;
        int getSignGrade(void) const;
        int getExecGrade(void) const;
		std::string getTarget(void) const;
		void setTarget(std::string t);
        void beSigned(Bureaucrat const &bCrat);
		void execute(Bureaucrat const & executor) const;
        
        std::string isSigned(void) const;
        
    class GradeTooHighException: public std::exception
    {
        public:
            virtual const char *what() const throw();
    };
    class GradeTooLowException: public std::exception
    {
        public:
            virtual const char *what() const throw();
    };
	class RobotomyException: public std::exception
    {
        public:
            virtual const char *what() const throw();
    };
};

std::ostream &operator<<(std::ostream &out, RobotomyRequestForm const &obj);

#endif
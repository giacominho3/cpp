#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	private:

		std::string	_name;
        bool        _isSigned;
        int			_gToSign;
        int			_gToExec;
		std::string _target;
		
	public:

        PresidentialPardonForm();
        PresidentialPardonForm(const std::string t);
        PresidentialPardonForm(PresidentialPardonForm const &oldPPF);
       
        ~PresidentialPardonForm();
        
        PresidentialPardonForm &operator=(PresidentialPardonForm const &toCopy);
        
        std::string getName(void) const;
        int getSignGrade(void) const;
        int getExecGrade(void) const;
		std::string getTarget(void) const;
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
	class PresidentialException: public std::exception
    {
        public:
            virtual const char *what() const throw();
    };
};

std::ostream &operator<<(std::ostream &out, PresidentialPardonForm const &obj);

#endif
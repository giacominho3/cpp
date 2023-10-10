#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	private:

		std::string	_name;
        bool        _isSigned;
        int			_gToSign;
        int			_gToExec;
		std::string _target;
		
	public:

        ShrubberyCreationForm();
        ShrubberyCreationForm(const std::string t);
        ShrubberyCreationForm(ShrubberyCreationForm const &oldPPF);
       
        ~ShrubberyCreationForm();
        
        ShrubberyCreationForm &operator=(ShrubberyCreationForm const &toCopy);
        
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
	class ShrubberyException: public std::exception
    {
        public:
            virtual const char *what() const throw();
    };
};

std::ostream &operator<<(std::ostream &out, ShrubberyCreationForm const &obj);

#endif
#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class AForm
{
    private:

        std::string	_name;
        bool        _isSigned;
        int			_gToSign;
        int			_gToExec;
		Bureaucrat	_target;

    public:

        AForm();
        AForm(const std::string n, int sg, int eg);
        AForm(AForm const &oldForm);
       
        virtual ~AForm();
        
        AForm &operator=(AForm const &toCopy);
        
        std::string getName(void) const;
        int getSignGrade(void) const;
        int getExecGrade(void) const;
        virtual void beSigned(Bureaucrat const &bCrat) = 0;
		virtual void execute(Bureaucrat const & executor) const = 0;
        
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
};
    std::ostream &operator<<(std::ostream &out, AForm const &obj);

#endif
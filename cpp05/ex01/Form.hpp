#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Form
{
    private:

        std::string	_name;
        bool        _isSigned;
        int			_gToSign;
        int			_gToExec;

    public:

        Form();
        Form(const std::string n, int sg, int eg);
        Form(Form const &oldForm);
       
        ~Form();
        
        Form &operator=(Form const &toCopy);
        
        std::string getName(void) const;
        int getSignGrade(void) const;
        int getExecGrade(void) const;
        void beSigned(Bureaucrat const &bCrat);
        
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
    std::ostream &operator<<(std::ostream &out, Form const &obj);

#endif
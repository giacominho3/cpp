#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class AForm;

class Bureaucrat 
{
    private:

        std::string const	_name;
        int         		_grade;

    public:

        Bureaucrat();
        Bureaucrat(const std::string n, int g);
        Bureaucrat(Bureaucrat const &oldBureaucrat);
  
        ~Bureaucrat();
    
        Bureaucrat &operator=(Bureaucrat const &toCopy);
    
        int getGrade(void) const;
        std::string getName(void) const;
        void    incrementGrade(void);
        void    decrementGrade(void);
		void	signForm(AForm &form);
		void	executeForm(AForm const & form);
    
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

std::ostream &operator<<(std::ostream &stream, Bureaucrat const &bCrat);

#endif
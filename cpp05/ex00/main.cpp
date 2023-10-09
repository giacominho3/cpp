#include "Bureaucrat.hpp"

int main(void) 
{
	try 
	{
        Bureaucrat b1("Carlo", 2);
        std::cout << b1 << std::endl;
    }
    catch (Bureaucrat::GradeTooHighException &e) 
	{
        std::cerr << "TooHighException" << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException &e) 
	{
        std::cerr << "TooLowException" << std::endl;
    }

    try 
	{
        Bureaucrat b2("Giustino", 1);
        b2.incrementGrade();
        std::cout << b2 << std::endl;
    }
    catch (Bureaucrat::GradeTooHighException &e) 
	{
        std::cerr << "TooHighException" << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException &e) 
	{
        std::cerr << "TooLowException" << std::endl;
    }

    try 
	{
        Bureaucrat b3("Fernando", 150);
        b3.decrementGrade();
        std::cout << b3 << std::endl;
    }
    catch (Bureaucrat::GradeTooHighException &e) 
	{
        std::cerr << e.what() << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException &e) 
	{
        std::cerr << e.what() << std::endl;
    }
}
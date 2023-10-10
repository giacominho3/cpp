#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

int main(void) 
{
	Bureaucrat bbbb = Bureaucrat("Pippo", 2);
	ShrubberyCreationForm SCF = ShrubberyCreationForm("Target One");
	RobotomyRequestForm RRF = RobotomyRequestForm("Target Two");
	PresidentialPardonForm PPF = PresidentialPardonForm("Target Three");

	std::cout << "--------------------------------------------" << std::endl;
    try 
	{
		bbbb.signForm(SCF);

		bbbb.executeForm(SCF);
    }
	catch (std::exception & e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
    }
	std::cout << "--------------------------------------------" << std::endl;
	try 
	{
		bbbb.signForm(RRF);
	
		bbbb.executeForm(RRF);
		bbbb.executeForm(RRF);
		bbbb.executeForm(RRF);
    }
	catch (std::exception & e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
    }
	std::cout << "--------------------------------------------" << std::endl;
	try
	{
		bbbb.signForm(PPF);
		bbbb.executeForm(PPF);
	}
	catch(std::exception & e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}
	
}
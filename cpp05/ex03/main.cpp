#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main(void) 
{
	Intern i = Intern();
	AForm *rrf;

	try
	{
		rrf = i.makeForm("presidential", "Pippo");
	}
	catch (std::exception & e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
    }

	std::cout << *rrf << std::endl;
}
#include "Form.hpp"

int main(void) 
{
    try 
    {
        Form form1("Patto col diavolo", 150, 150);
        Bureaucrat b1("Piero", 1);
        form1.beSigned(b1);
        b1.incrementGrade(); 
    }
    catch (std::exception &e) 
    {
        std::cout << e.what() << std::endl;
    }
  
    std::cout  << "<<<<<<<<<<<<>>>>>>>>>>>" << std::endl;
    try 
    {
        Form form2("Scambio fantacalcistico", 150, 150);
        std::cout << form2;
        Bureaucrat b2("Il sottoscritto", 150);
        b2.signForm(form2);
    }
    catch (std::exception &e) 
    {
        std::cout << e.what() << std::endl;
    }

    //std::cout << "<<<<<<<<<<<<<>>>>>>>>>>>>>" << std::endl;
    //Form form1;
    //Form pContract("Patto col diavolo", 1, 1);
    //Form pApplication("Scambio fantacalcistico", 150, 150);
    //Form copyApplication(pApplication);
    
    //std::cout << form1;
    //form1 = pContract;
    //std::cout << "Uknown Form should become a " << pContract.getName() << " now" << std::endl;
    //std::cout << form1;
    //std::cout << "<<<<<<<<<<<<<>>>>>>>>>>>>>" << std::endl;
    //std::cout << copyApplication;
}
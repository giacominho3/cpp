#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	ct1 = ClapTrap("Pacciani");

	ct1.attack("Susanna");
	ct1.printStats();
	ct1.attack("Susanna");
	ct1.printStats();
	ct1.attack("Susanna");
	ct1.printStats();
	ct1.beRepaired(1);
	ct1.printStats();
	ct1.attack("Susanna");
	ct1.attack("Susanna");
	ct1.attack("Susanna");
	ct1.attack("Susanna");
	ct1.attack("Susanna");
	ct1.attack("Susanna");
	ct1.attack("Susanna");
	ct1.attack("Susanna");
	ct1.attack("Susanna");
}

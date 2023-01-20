#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	ct1 = ClapTrap("Eminem");
	DiamondTrap	ft1 = DiamondTrap("Slim Shady");

	ct1.attack("mia madre");
	ct1.printStats();
	ct1.attack("mia madre");
	ct1.printStats();
	ct1.attack("mia madre");
	ct1.printStats();
	ct1.beRepaired(1);
	ct1.printStats();
	ct1.attack("mia madre");
	ct1.attack("mia madre");
	ct1.attack("mia madre");
	ct1.attack("mia madre");
	ct1.printStats();

	ft1.attack("il papa");
	ft1.printStats();
	ft1.attack("il papa");
	ft1.printStats();
	ft1.attack("il papa");
	ft1.printStats();
	ft1.beRepaired(1);
	ft1.printStats();
	ft1.attack("il papa");
	ft1.attack("il papa");
	ft1.whoAmI();
	ft1.printStats();
}

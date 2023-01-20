#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int	main()
{
	ClapTrap	ct1 = ClapTrap("Misseri");
	FragTrap	ft1 = FragTrap("Oj");

	ct1.attack("Sarah");
	ct1.printStats();
	ct1.attack("Sarah");
	ct1.printStats();
	ct1.attack("Sarah");
	ct1.printStats();
	ct1.beRepaired(1);
	ct1.printStats();
	ct1.attack("Sarah");
	ct1.attack("Sarah");
	ct1.attack("Sarah");
	ct1.attack("Sarah");
	ct1.printStats();

	ft1.attack("wife");
	ft1.printStats();
	ft1.attack("wife");
	ft1.printStats();
	ft1.attack("wife");
	ft1.printStats();
	ft1.beRepaired(1);
	ft1.printStats();
	ft1.attack("wife");
	ft1.attack("wife");
	ft1.highFivesGuys();
	ft1.printStats();
}

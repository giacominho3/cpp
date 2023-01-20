#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	ClapTrap	ct1 = ClapTrap("Amanda");
	ScavTrap	st1 = ScavTrap("Raffaele");

	ct1.attack("Meredith");
	ct1.printStats();
	ct1.attack("Meredith");
	ct1.printStats();
	ct1.attack("Meredith");
	ct1.printStats();
	ct1.beRepaired(1);
	ct1.printStats();
	ct1.attack("Meredith");
	ct1.attack("Meredith");
	ct1.attack("Meredith");
	ct1.attack("Meredith");
	ct1.attack("Meredith");
	ct1.attack("Meredith");
	ct1.attack("Meredith");
	ct1.attack("Meredith");
	ct1.attack("Meredith");
	ct1.printStats();

	st1.attack("Meredith");
	st1.printStats();
	st1.attack("Meredith");
	st1.printStats();
	st1.attack("Meredith");
	st1.printStats();
	st1.beRepaired(1);
	st1.printStats();
	st1.attack("Meredith");
	st1.attack("Meredith");
	st1.attack("Meredith");
	st1.attack("Meredith");
	st1.attack("Meredith");
	st1.attack("Meredith");
	st1.attack("Meredith");
	st1.attack("Meredith");
	st1.attack("Meredith");
	st1.guardGate();
	st1.printStats();
}

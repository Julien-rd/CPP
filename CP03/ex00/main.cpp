#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap trap("jim");
	trap.printInfo();
	// trap.takeDamage(1000);
	trap.beRepaired(100);
	trap.attack("Shariya");
	trap.takeDamage(76);
	trap.attack("Shariya");
	trap.printInfo();
	return (0);
}
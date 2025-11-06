#include "HumanA.hpp"


HumanA::HumanA(std::string new_name, Weapon new_weapon)
    : name(new_name)
{
	weapon = new Weapon*;
	*weapon = new Weapon(new_weapon.getType());
}

HumanA::~HumanA(){
	delete *weapon;
	delete weapon;
	return ;
}
void HumanA::attack(void)
{
	std::cout << name << " attacks with their " << (*weapon)->getType() << std::endl;
}
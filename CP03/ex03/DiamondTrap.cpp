#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string new_name) 
    : FragTrap(new_name), ScavTrap(new_name)
{
    std::cout << "DiamondTrap Constructor called" << std::endl;
    name = new_name;
}

DiamondTrap::~DiamondTrap(void) { 
    std::cout << "DiamondTrap Constructor called" << std::endl;
    return ; 
}

void DiamondTrap::whoAmI(void)
{
    std::cout << name << std::endl;
    std::cout << name << "_clap_name" << std::endl;
}
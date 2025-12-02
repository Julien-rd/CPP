#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string new_name) 
    : ClapTrap(new_name)
{
    std::cout << "ScavTrap Constructor called" << std::endl;
    update_data(new_name, 100, 50, 20);
}

ScavTrap::~ScavTrap(void) { 
    std::cout << "ScavTrap Constructor called" << std::endl;
    return ; 
}

void ScavTrap::guardGate(void){
    std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}
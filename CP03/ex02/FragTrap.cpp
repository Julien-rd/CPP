#include "FragTrap.hpp"

FragTrap::FragTrap(std::string new_name) 
    : ClapTrap(new_name)
{
    std::cout << "FragTrap Constructor called" << std::endl;
    update_data(new_name, 100, 100, 30);
}

FragTrap::~FragTrap(void) { 
    std::cout << "FragTrap Constructor called" << std::endl;
    return ; 
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "positive high-five requested" << std::endl;
}

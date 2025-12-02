#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string new_name) 
    : name(new_name), hit_points(10), energy_points(10), attack_damage(0)
{
}

ClapTrap::~ClapTrap(void)
{
    return ;
}

void ClapTrap::printInfo(void){
    std::cout << name << " hit_points: " << hit_points << " Energy: " << energy_points << " A_dmg: " << attack_damage << std::endl; 
}

void ClapTrap::attack(const std::string& target){
    if (hit_points == 0)
    {
        std::cout << "you died!" << std::endl;
        return ;
    }
    if (energy_points == 0)
    {
        std::cout << "no energy left" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << name << " attacks " << target <<  " causing " << attack_damage << " points of damage! " << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
    if (amount > hit_points)
    {
        hit_points = 0;
    }
    else
    {
        hit_points = hit_points - amount;
    }
}

void ClapTrap::beRepaired(unsigned int amount){
    if (hit_points == 0)
    {
        std::cout << "you died!" << std::endl;
        return ;
    }
    if (energy_points == 0)
    {
        std::cout << "no energy left" << std::endl;
        return ;
    }
    if (amount > 100 - hit_points)
        hit_points = 100;
    else
        hit_points += amount;
    energy_points -= 1;
}
#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
    public:

    DiamondTrap(std::string new_name);
    ~DiamondTrap();
    void whoAmI();
    void attack() { ScavTrap::attack(const std::string& target); }; ; 

    private:
    std::string name;
    unsigned int hit_points;
    unsigned int energy_points;
    unsigned int attack_damage;

};

#endif
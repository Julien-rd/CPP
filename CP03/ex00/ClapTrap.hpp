#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>

class ClapTrap {
    private:

    std::string *type;

    public:
    
    ClapTrap(std::string new_name);
    ~ClapTrap();
    void printInfo();
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    private:

    std::string name;
    unsigned int hit_points;
    unsigned int energy_points;
    unsigned int attack_damage;

};

#endif
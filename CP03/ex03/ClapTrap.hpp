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
    
    protected:

    void update_data(std::string new_name, unsigned int new_hit_points, unsigned int new_energy_points, unsigned int new_attack_damage);

    private:
    
    std::string name;
    unsigned int hit_points;
    unsigned int energy_points;
    unsigned int attack_damage;

};

#endif
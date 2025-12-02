#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
    public:

    FragTrap(std::string new_name);
    ~FragTrap();
    void guardGate();
    void highFivesGuys(void);

};

#endif
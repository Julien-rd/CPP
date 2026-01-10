#include "Zombie.hpp"

int main(void)
{
    Zombie	*Zombie;
    Zombie	*tmp;
    int i = -1;

    Zombie = zombieHorde(10, "julien");
    while(++i < 10)
    {
        Zombie->announce();
        tmp = Zombie;
        Zombie++;
        delete tmp;
    }
}
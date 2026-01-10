#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie	**newZombie;

    newZombie = new Zombie*[N];
    if (N < 0)
        return NULL;
    while(--N >= 0)
    {
        newZombie[N] = new Zombie(name);
    }
    return (newZombie[0]);
}


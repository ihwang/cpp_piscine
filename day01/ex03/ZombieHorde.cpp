#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n)
{
    horde = new Zombie[n];
    nb = n;
}

ZombieHorde::~ZombieHorde(void)
{
    delete[] horde;
}

void ZombieHorde::announce(void)
{
    for (int i = 0; i < nb; i++)
        horde[i].announce();
}


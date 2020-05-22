#pragma once

#include "Zombie.hpp"

class ZombieHorde
{
    Zombie* horde;
    int nb;

    public:
        ZombieHorde(int n);
        ~ZombieHorde(void);
        void announce(void);
};
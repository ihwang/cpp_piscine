#pragma once

#include "Zombie.hpp"

class ZombieEvent
{
    std::string type_preset;

    public:
        ZombieEvent(void) {}
        ~ZombieEvent(void) {}
        void setZombieType(std::string type);
        Zombie* newZombie(std::string name);
        void randomChump(void);
};
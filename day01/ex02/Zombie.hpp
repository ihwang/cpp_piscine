#pragma once

#include <iostream>
#include <string>
//#include "ZombieEvent.hpp"

class Zombie
{
    std::string name;
    std::string type;

    public:
        Zombie(void) {}
        Zombie(std::string name, std::string type = "non")
        : name(name), type(type) {}
        ~Zombie(void) {}
        void announce(void);
};
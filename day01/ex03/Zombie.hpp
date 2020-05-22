#pragma once

#include <iostream>
#include <string>

class Zombie
{
    std::string name;
    std::string type;

    public:
        Zombie(std::string name = "John Doe", std::string type = "non")
        : name(name), type(type) {}
        ~Zombie(void) {}
        void announce(void);
};
#pragma once

#include <string>
#include <iostream>

class Pony
{
    std::string name;
    std::string color;

    public:
        Pony(std::string name, std::string color)
        : name(name), color(color) {}
        ~Pony(void);
        void print_info(void);
};
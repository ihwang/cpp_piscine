#pragma once

#include <iostream>
#include <string>
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : virtual public FragTrap, virtual public NinjaTrap
{
    public:
        SuperTrap(std::string name);
        SuperTrap(const SuperTrap& obj);
        ~SuperTrap(void);

};
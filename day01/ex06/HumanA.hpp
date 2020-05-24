#pragma once

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
    std::string _name;
    Weapon& _weapon;

    public:
        HumanA(const char* name, Weapon&);
        ~HumanA(void);
        void attack(void) const;
};

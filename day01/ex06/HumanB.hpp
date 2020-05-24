#pragma once

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
    std::string _name;
    Weapon* _weapon;

    public:
        HumanB(const char *name);
        ~HumanB(void);
        void setWeapon(Weapon& weapon);
        void attack(void) const;
};

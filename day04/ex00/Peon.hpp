#pragma once

#include <iostream>
#include <string>
#include "Victim.hpp"

class Peon : public Victim
{
    public:
        Peon(void);
        Peon(std::string name);
        Peon(const Peon& obj);
        ~Peon(void);

        Peon& operator=(const Peon& obj);

        void getPolymorphed(void) const;
};
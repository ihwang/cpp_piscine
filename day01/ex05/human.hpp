#pragma once

#include <string>
#include "Brain.hpp"

class Human
{
    Brain _brain;

    public:
        Human(void);
        Brain getBrain(void) const;
        std::string identify(void) const;
};
#pragma once

#include <string>
#include <sstream>

class Brain
{
    std::string address;

    public:
        Brain(void);
        ~Brain(void);
        void setAddress(void);
        std::string identify(void) const;
};
#pragma once

#include <iostream>
#include <string>
#include "Victim.hpp"

class Sorcerer
{
    std::string _name;
    std::string _title;

    public:
        Sorcerer(void);
        Sorcerer(std::string name, std::string title);
        Sorcerer(const Sorcerer &obj);
        ~Sorcerer(void);
        
        void polymorph(Victim const& obj) const;

        Sorcerer& operator=(const Sorcerer& obj);

        std::string get_name(void) const;
        std::string get_title(void) const;
};

std::ostream& operator<<(std::ostream& os, const Sorcerer &obj);
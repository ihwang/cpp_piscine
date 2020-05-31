#pragma once

#include <iostream>
#include <string>

class Victim
{
    protected:
        std::string _name;

    public:
        Victim(void);
        Victim(std::string _name);
        Victim(const Victim& obj);
        ~Victim(void);

        virtual void getPolymorphed(void) const;
        
        Victim& operator=(const Victim& obj);

        std::string get_name(void) const;
};

std::ostream& operator<<(std::ostream& os, Victim& obj);
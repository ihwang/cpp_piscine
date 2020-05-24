#pragma once

#include <string>

class Weapon
{
    std::string _type;

    public:
    Weapon(void);
    Weapon(std::string type);
    ~Weapon(void);
    void setType(std::string type);
    const std::string& getType(void) const;
};
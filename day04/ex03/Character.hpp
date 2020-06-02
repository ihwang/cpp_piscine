#pragma once

#include <iostream>
#include <string>
#include "ICharacter.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

class Character : public ICharacter
{
    std::string Name;
    AMateria* materiaInventory[4];
    int materiaNb;

    public:
        Character(std::string name);
        Character(const Character& obj);
        ~Character(void);

        Character& operator=(const Character& obj);

        virtual std::string const& getName(void) const;
        virtual void equip(AMateria* m);
        virtual void unequip(int idx);
        virtual void use(int idx, ICharacter& target);
};
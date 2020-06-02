#pragma once

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
    protected:
        unsigned int xp_;
        std::string type;

    public:
        AMateria(void);
        AMateria(std::string const& type);
        virtual ~AMateria(void);

        std::string const& getType(void) const;
        unsigned int getXP(void) const;

        virtual AMateria* clone(void) const = 0;
        virtual void use(ICharacter& target) = 0;
};
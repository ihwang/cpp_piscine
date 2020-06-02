#pragma once

#include <iostream>
#include <string>
#include "AMateria.hpp"

class Ice : public AMateria
{
    public:
        Ice(void);
        Ice(const Ice& obj);
        virtual ~Ice(void);

        Ice& operator=(const Ice& obj);

        virtual AMateria* clone(void) const;
        virtual void use(ICharacter& target);
};
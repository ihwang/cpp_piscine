#pragma once

#include <iostream>
#include <string>
#include "AMateria.hpp"

class Cure : public AMateria
{
    public:
        Cure(void);
        Cure(const Cure& obj);
        virtual ~Cure(void);

        Cure& operator=(const Cure& obj);

        virtual AMateria* clone(void) const;
        virtual void use(ICharacter& target);
};
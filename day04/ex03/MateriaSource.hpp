#pragma once

#include <iostream>
#include <string>
#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

class MateriaSource : public IMateriaSource
{
    AMateria* materiaInventory[4];

    public:
        MateriaSource(void);
        MateriaSource(const MateriaSource& obj);
        ~MateriaSource(void);

        MateriaSource& operator=(const MateriaSource& obj);

        virtual void learnMateria(AMateria*);
        virtual AMateria* createMateria(std::string const& type);
};

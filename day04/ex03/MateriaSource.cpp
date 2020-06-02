#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
    for (int i = 0; i < 4; i++)
        materiaInventory[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& obj)
{
    for (int i = 0; i < 4 && obj.materiaInventory[i]; i++)
        materiaInventory[i] = obj.materiaInventory[i]->clone();
}

MateriaSource::~MateriaSource(void)
{
    for (int i = 0; i < 4 && materiaInventory[i]; i++)
    {
        if (materiaInventory[i])
        {
            delete materiaInventory[i];
            materiaInventory[i] = NULL;
        }
    }
}

MateriaSource& MateriaSource::operator=(const MateriaSource& obj)
{
    for (int i = 0; i < 4 && obj.materiaInventory[i]; i++)
        materiaInventory[i] = obj.materiaInventory[i]->clone();
	return (*this);
}

void MateriaSource::learnMateria(AMateria* m)
{
	int i = 0;
    for (; materiaInventory[i]; i++)
        NULL;
    materiaInventory[i] = m;
}

AMateria* MateriaSource::createMateria(std::string const& type)
{
    for (int i = 0; i < 4 && materiaInventory[i]; i++)
    {
        if (materiaInventory[i]->getType() == type)
            return (materiaInventory[i]);
    }
	return (NULL);
}

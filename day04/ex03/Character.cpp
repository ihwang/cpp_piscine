#include "Character.hpp"

Character::Character(std::string name) :
    Name(name), materiaNb(0)
{
    for (int i = 0; i < 4; i++)
        materiaInventory[i] = NULL;
}

Character::Character(const Character& obj)
{
    Name = obj.Name;
    for (int i = 0; i < 4 && obj.materiaInventory[i]; i++, materiaNb++)
        materiaInventory[i] = obj.materiaInventory[i]->clone();
}

Character::~Character(void) {}

Character& Character::operator=(const Character& obj)
{
    Name = obj.Name;
    for (int i = 0; i < 4 && materiaInventory[i]; i++)
        delete materiaInventory[i];
    materiaNb = 0;
    int i = 0;
    for (; i < 4 && obj.materiaInventory[i]; i++)
        materiaInventory[i] = obj.materiaInventory[i]->clone();
    materiaNb = i;
    return (*this);
}

std::string const& Character::getName(void) const
{
    return (Name);
}

void Character::equip(AMateria* m)
{
    if (materiaNb > 3)
        return ;
    materiaInventory[materiaNb] = m;
    materiaNb++;
}

void Character::unequip(int idx)
{
    if ((idx < 0 && idx > 3) || (materiaNb == 0))
        return ;
    for (int i = idx; i < 3; i++)
        materiaInventory[i] = materiaInventory[i + 1];
    materiaInventory[materiaNb - 1] = NULL;
    materiaNb--;
}

void Character::use(int idx, ICharacter& target)
{
    if (!materiaInventory[idx])
    {
        std::cout << "No such materia" << std::endl;
        return ;
    }
    materiaInventory[idx]->use(target);
}
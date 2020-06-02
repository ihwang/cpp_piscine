#pragma once

#include <iostream>
#include <string>
#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
    public:
        TacticalMarine(void);
        TacticalMarine(const TacticalMarine& obj);
        virtual ~TacticalMarine(void);

        TacticalMarine& operator=(const TacticalMarine&obj);

        virtual ISpaceMarine* clone(void) const;
        virtual void battleCry(void) const;
        virtual void rangedAttack(void) const;
        virtual void meleeAttack(void) const;
};
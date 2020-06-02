#pragma once

#include <iostream>
#include <string>
#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{

    public:
        AssaultTerminator(void);
        AssaultTerminator(const AssaultTerminator& obj);
        virtual ~AssaultTerminator(void);

        AssaultTerminator& operator=(const AssaultTerminator&obj);

        virtual ISpaceMarine* clone(void) const;
        virtual void battleCry(void) const;
        virtual void rangedAttack(void) const;
        virtual void meleeAttack(void) const;
};
#pragma once

#include <iostream>
#include <string>
#include "ISquad.hpp"
#include "ISpaceMarine.hpp"

class Squad : public ISquad
{
    int _nb;
    int _max_nb;
    ISpaceMarine* _members[20];

    public:
        Squad(void);
        Squad(const Squad &obj);
        virtual ~Squad(void);

        Squad& operator=(const Squad &obj);

        virtual int getCount(void) const;
        virtual ISpaceMarine* getUnit(int) const;
        virtual int push(ISpaceMarine *);
};
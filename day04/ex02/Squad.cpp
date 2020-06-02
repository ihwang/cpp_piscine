#include "Squad.hpp"

Squad::Squad(void) :
    _nb(0), _max_nb(20)
{
    for (int i = 0; i < 20 ; i++)
        _members[i] = NULL;
}

Squad::Squad(const Squad& obj) :
    _nb(0), _max_nb(20)
{
    for (int i = 0; i < obj._max_nb && i < obj._nb; i++)
    {
        _members[i] = obj._members[i]->clone();
        _nb++;
    }
}

Squad::~Squad(void)
{
    for (int i = 0; i < _nb; i++)
    {
        delete _members[i];
    }
}

Squad& Squad::operator=(const Squad& obj)
{
    _nb = obj._nb;
    _max_nb = obj._max_nb;
    for (int i = 0; i < _nb; i++)
    {
        _members[i] = obj._members[i]->clone();
    }
    return (*this);
}

int Squad::getCount(void) const
{
    return (_nb);
}

ISpaceMarine* Squad::getUnit(int nb) const
{
    return (_members[nb]);
}

int Squad::push(ISpaceMarine* obj)
{
    _members[_nb] = obj;
    return (++_nb);
}
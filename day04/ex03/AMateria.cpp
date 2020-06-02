#include "AMateria.hpp"

AMateria::AMateria(void) {}

AMateria::AMateria(std::string const& type) :
    xp_(0), type(type) {}

AMateria::~AMateria(void) {}

std::string const& AMateria::getType(void) const
{
    return (type);
}

unsigned int AMateria::getXP(void) const
{
    return (xp_);
}
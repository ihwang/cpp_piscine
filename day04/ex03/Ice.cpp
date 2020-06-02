#include "Ice.hpp"

Ice::Ice(void) :
    AMateria("ice") {}

Ice::Ice(const Ice& obj)
{
    type = obj.type;
}

Ice::~Ice(void) {}

Ice& Ice::operator=(const Ice& obj)
{
    type = obj.type;
    return (*this);
}

AMateria* Ice::clone(void) const
{
    return (new Ice);
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName()
              << " *" << std::endl;
    xp_ += 10;
}
#include "Cure.hpp"

Cure::Cure(void) :
    AMateria("cure") {}

Cure::Cure(const Cure& obj)
{
    type = obj.type;
}

Cure::~Cure(void) {}

Cure& Cure::operator=(const Cure& obj)
{
    type = obj.type;
    return (*this);
}

AMateria* Cure::clone(void) const
{
    return (new Cure);
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
    xp_ += 10;
}
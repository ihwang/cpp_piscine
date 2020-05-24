#include "HumanB.hpp"

HumanB::HumanB(const char *name) : _name(name)
{
    return ;
}

HumanB::~HumanB(void)
{
    return ;
}

void HumanB::setWeapon(Weapon& weapon)
{
    _weapon = &weapon;
}

void HumanB::attack(void) const
{
    std::cout << _name << " attacks with his " << _weapon->getType() << std::endl;
}
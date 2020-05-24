#include "HumanA.hpp"

HumanA::HumanA(const char* name, Weapon& weapon) : _name(name), _weapon(weapon)
{
    return ;
}

HumanA::~HumanA(void)
{
    return ;
}

void HumanA::attack(void) const
{
    std::cout << _name << " attacks with his " << _weapon.getType() << std::endl;
}
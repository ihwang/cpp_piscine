#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name) :
    ClapTrap(name, 100, 100, 120, 120, 1, 60, 20, 5),
    FragTrap(name), NinjaTrap(name)
{
    std::cout << "SuperTrap constructor is called" << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap &obj) :
    FragTrap(obj), NinjaTrap(obj)
{
    std::cout << "SuperTrap constructor is called" << std::endl;
}

SuperTrap::~SuperTrap(void)
{
    std::cout << "SuperTrap destructor is called" << std::endl;
}

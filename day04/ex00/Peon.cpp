#include "Peon.hpp"

Peon::Peon(void) { std::cout << "Zog zog." << std::endl; }

Peon::Peon(std::string name)
{
    std::cout << "Zog zog." << std::endl;
    _name = name;
}

Peon::Peon(const Peon& obj)
{
    std::cout << "Zog zog." << std::endl;
    _name = obj._name;
}

Peon::~Peon(void) { std::cout << "Bleuark..." << std::endl; }

Peon& Peon::operator=(const Peon& obj)
{
    _name = obj._name;
    return (*this);
}

void Peon::getPolymorphed(void) const
{
    std::cout << _name << " has been turned into a pink pony !"
              << std::endl;
}
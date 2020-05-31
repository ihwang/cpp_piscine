#include "Victim.hpp"

Victim::Victim(void)
{
    _name = "Joe";
    std::cout << "Some random victim called " << _name
              << " just popped !" << std::endl;
}

Victim::Victim(std::string name) :
    _name(name)
{
    std::cout << "Some random victim called " << _name
              << " just popped !" << std::endl;
}

Victim::Victim(const Victim& obj)
{
    std::cout << "Copy of Some random victim callsed " << _name
              << " just popped !" << std::endl;
    _name = obj._name;
}

Victim::~Victim(void)
{
    std::cout << "Victim " << _name << " just died for no apparent reason !" << std::endl;
}

void Victim::getPolymorphed(void) const
{
    std::cout << _name << " has been turned into a cute little sheep ! " << std::endl;
}

std::string Victim::get_name(void) const
{
    return (_name);
}

Victim& Victim::operator=(const Victim& obj)
{
    _name = obj._name;
    return (*this);
}

std::ostream& operator<<(std::ostream& os, Victim& obj)
{
    std::cout << "I am " << obj.get_name() << ", " << ", and I like otters ! "
              << std::endl;
    return (os);
}
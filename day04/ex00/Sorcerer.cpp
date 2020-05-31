#include "Sorcerer.hpp"

Sorcerer::Sorcerer(void) {}

Sorcerer::Sorcerer(std::string name, std::string title) :
    _name(name), _title(title)
{
    std::cout << _name << ", " << _title << ", is born !" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer& obj)
{
    std::cout << "Copy of "<< _name << ", " << _title << ", is born !"
              << std::endl;
    _name = obj._name;   
    _title = obj._title;
}

Sorcerer::~Sorcerer(void)
{
    std::cout << _name << ", " << _title
               << ", is dead. Consequences will never be the smae !" << std:: endl;
}

void Sorcerer::polymorph(Victim const& obj) const
{
    return (obj.getPolymorphed());
}

Sorcerer& Sorcerer::operator=(const Sorcerer& obj)
{
    _name = obj._name;
    _title = obj._title;
    return (*this);
}

std::string Sorcerer::get_name(void) const
{
    return (_name);
}

std::string Sorcerer::get_title(void) const
{
    return (_title);
}

std::ostream& operator<<(std::ostream& os, const Sorcerer &obj)
{
    os << "i am " << obj.get_name() << ", " << obj.get_title()
       << ", and I like ponies ! " << std::endl;
    return (os);
}
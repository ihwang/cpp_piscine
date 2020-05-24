#include "Brain.hpp"

Brain::Brain(void)
{
    setAddress();
}

Brain::~Brain(void)
{
    return ;
}

void Brain::setAddress(void)
{
    std::stringstream ss;
    ss << static_cast<void*>(this);
    address = ss.str();
}

std::string Brain::identify(void) const
{
    return address;
}
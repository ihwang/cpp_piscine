#include "Pony.hpp"

Pony::~Pony(void)
{
    return ;
}

void Pony::print_info(void)
{
    std::cout << "Name : " << name << std::endl
              << "Color : " << color << std::endl;
}
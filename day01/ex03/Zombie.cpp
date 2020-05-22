#include "Zombie.hpp"

void Zombie::announce(void)
{
    std::cout << "<" << name << " (" << type
              << ")> Braiiiiiiinnnssss..." << std::endl;
}
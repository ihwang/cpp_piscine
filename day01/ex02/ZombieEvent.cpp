#include "ZombieEvent.hpp"

void ZombieEvent::setZombieType(std::string type)
{
    type_preset.assign(type);
}

Zombie* ZombieEvent::newZombie(std::string name)
{
    Zombie* new_zombie;

    if (type_preset.empty())
        new_zombie = new Zombie(name);
    else
        new_zombie = new Zombie(name, type_preset);
    return (new_zombie);
}

void ZombieEvent::randomChump(void)
{
    if (type_preset.empty())
    {
        Zombie random_chump("John Doe");
        random_chump.announce();
    }
    else
    {
        Zombie random_chump("John Doe", type_preset);
        random_chump.announce();
    }
}
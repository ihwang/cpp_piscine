#include "ZombieEvent.hpp"

int main(void)
{
    Zombie z1("ihwang");
    Zombie *z2 = new Zombie;
    z1.announce();
    z2->announce();

    ZombieEvent zombie_village;
    Zombie *z3 = zombie_village.newZombie("subin");
    zombie_village.setZombieType("disgusting");
    Zombie *z4 = zombie_village.newZombie("inchan");
    z3->announce();
    z4->announce();

    zombie_village.randomChump();
    delete z2;
    delete z3;
    delete z4;
    return (0);
}
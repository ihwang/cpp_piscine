#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void) :
	AWeapon("Plasma Rifle", 5, 21) {}

PlasmaRifle::PlasmaRifle(const PlasmaRifle& obj)
{
	Name = obj.Name;
	AP = obj.AP;
	Damage = obj.Damage;
}

PlasmaRifle::~PlasmaRifle(void) {}

PlasmaRifle& PlasmaRifle::operator=(const PlasmaRifle& obj)
{
	Name = obj.Name;
	AP = obj.AP;
	Damage = obj.Damage;
	return (*this);
}

void PlasmaRifle::attack(void) const
{
	std::cout << "*piouuu piouuu piouuu *" << std::endl;
}

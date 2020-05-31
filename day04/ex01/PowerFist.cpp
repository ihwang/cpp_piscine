#include "PowerFist.hpp"

PowerFist::PowerFist(void) :
	AWeapon("PowerFist", 8, 50) {}

PowerFist::PowerFist(const PowerFist& obj)
{
	Name = obj.Name;
	AP = obj.AP;
	Damage = obj.Damage;
}

PowerFist::~PowerFist(void) {}

PowerFist& PowerFist::operator=(const PowerFist& obj)
{
	Name = obj.Name;
	AP = obj.AP;
	Damage = obj.Damage;
	return (*this);
}

void PowerFist::attack(void) const
{
	std::cout << "* Pschhh... SBAM! *" << std::endl;
}

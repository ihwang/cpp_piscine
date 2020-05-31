#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void) :
	Enemy("Super Mutant", 170)
{
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant& obj)
{
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
	Type = obj.Type;
	HP = obj.HP;
}

SuperMutant::~SuperMutant(void)
{
	std::cout << "Aaargh ..." << std::endl;
}

SuperMutant& SuperMutant::operator=(const SuperMutant& obj)
{
	Type = obj.Type;
	HP = obj.HP;
	return (*this);
}

void SuperMutant::takeDamage(int damage)
{
	HP -= damage - 3;
	if (HP < 0)
		HP = 0;
}

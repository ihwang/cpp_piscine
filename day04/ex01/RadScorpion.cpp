#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void) :
	Enemy("RadScorpion", 80)
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion& obj)
{
	std::cout << "* click click click *" << std::endl;
	Type = obj.Type;
	HP = obj.HP;
}

RadScorpion::~RadScorpion(void)
{
	std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion& RadScorpion::operator=(const RadScorpion& obj)
{
	Type = obj.Type;
	HP = obj.HP;
	return (*this);
}

void RadScorpion::takeDamage(int damage)
{
	HP -= damage;
	if (HP < 0)
		HP = 0;
}

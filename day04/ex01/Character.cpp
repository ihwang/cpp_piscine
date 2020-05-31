#include "Character.hpp"

Character::Character(std::string const& name) :
	Name(name), AP(40), Weapon(NULL) {}

Character::Character(const Character& obj)
{
	Name = obj.Name;
	AP = obj.AP;
	Weapon = obj.Weapon;
}

Character::~Character(void) {}

Character& Character::operator=(const Character& obj)
{
	Name = obj.Name;
	AP = obj.AP;
	Weapon = obj.Weapon;
	return (*this);
}

void Character::recoverAP(void)
{
	AP += 10;
	if (AP > 40)
		AP = 40;
}

void Character::attack(Enemy* obj)
{
	if (Weapon == NULL)
		return ;
	std::cout << Name << " attacks " << obj->getType()
			  << " with a " << Weapon->getName()
			  << std::endl;
	Weapon->attack();
	obj->takeDamage(Weapon->getDamage());
	AP -= Weapon->getAPCost();
	if (obj->getHP() == 0)
		delete obj;
}

void Character::equip(AWeapon* weapon)
{
	Weapon = weapon;
}

std::string Character::getName(void) const
{
	return (Name);
}

int Character::getAP(void) const
{
	return (AP);
}

bool Character::is_equiped(void) const
{
	return (Weapon);
}

std::string Character::getWeaponName(void) const
{
	if (Weapon)
		return (Weapon->getName());
	return (NULL);
}

std::ostream& operator<<(std::ostream& os, Character& obj)
{
	if (obj.is_equiped())
	{
		os << obj.getName() << " has " << obj.getAP() 
		   << "AP and wields a " << obj.getWeaponName() << std::endl;
		   return (os);
	}
	os << obj.getName() << " has " << obj.getAP()
	   << "AP and is unarmed" << std::endl;
	return (os);
}
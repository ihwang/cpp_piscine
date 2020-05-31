#include "AWeapon.hpp"

AWeapon::AWeapon(void) {}

AWeapon::AWeapon(std::string const& name, int ap, int damage) :
	Name(name), AP(ap), Damage(damage) {}

AWeapon::AWeapon(const AWeapon& obj)
{
	Name = obj.Name;
	AP = obj.AP;
	Damage = obj.Damage;
}

AWeapon::~AWeapon(void) {}

AWeapon& AWeapon::operator=(const AWeapon& obj)
{
	Name = obj.Name;
	AP = obj.AP;
	Damage = obj.Damage;
	return (*this);
}

std::string AWeapon::getName(void) const
{
	return (Name);
}

int AWeapon::getAPCost(void) const
{
	return (AP);
}

int AWeapon::getDamage(void) const
{
	return (Damage);
}


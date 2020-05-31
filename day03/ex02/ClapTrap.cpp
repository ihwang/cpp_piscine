#include "ClapTrap.hpp"

Claptrap::Claptrap(std::string name)
	: _name(name), _hp(100), _max_hp(100), _energy(100), _max_energy(100),
	_level(1), _melee_dmg(30), _ranged_dmg(30), _armor(5)
{
	std::cout << "Claptrap constructor is called" << std::endl;
}

Claptrap::Claptrap(const Claptrap& obj)
{
	std::cout << "Claptrap copy construcor is called" << std::endl;
	*this = obj;
}

Claptrap::~Claptrap(void) {std::cout << "Claptrap destructor is called" << std::endl;}

Claptrap& Claptrap:: operator=(const Claptrap& obj)
{
	std::cout << "Claptrap assignment operator is called" << std::endl;
	_name = obj._name;
	_hp = obj._hp;
	_max_hp = obj._max_hp;
	_energy = obj._energy;
	_max_energy = obj._max_energy;
	_level = obj._level;
	_melee_dmg = obj._melee_dmg;
	_ranged_dmg = obj._ranged_dmg;
	_armor = obj._armor;
	return (*this);
}

std::string Claptrap::get_name(void) const
{
	return (_name);
}

unsigned int Claptrap::get_melee_dmg(void) const
{
	return (_melee_dmg);
}

unsigned int Claptrap::get_ranged_dmg(void) const
{
	return (_ranged_dmg);
}

void Claptrap::rangedAttack(std::string const& target) const
{
	std::cout << "FR4G_TP " << _name << " attacks " << target
			  << " at range, causing " << _ranged_dmg << " points of damage !"
			  << std::endl;
}

void Claptrap::meleeAttack(std::string const& target) const
{
	std::cout << "FR4G_TP " << _name << " attacks " << target
			  << " at melee, causing " << _melee_dmg << " points of damage !"
			  << std::endl;
}

void Claptrap::takeDamage(unsigned int amount)
{
	_hp -= (amount - _armor);
	if (_hp < 0)
		_hp = 0;
}

void Claptrap::beRepaired(unsigned int amount)
{
	_hp += amount;
	if (_hp > 100)
		_hp = 100;
}
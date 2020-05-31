#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{

}

ClapTrap::ClapTrap(std::string name, int hp, int max_hp, int energy, int max_energy
				, int level, int melee_dmg, int ranged_dmg, int armor)
	: _name(name), _hp(hp), _max_hp(max_hp), _energy(energy), _max_energy(max_energy)
	, _level(level), _melee_dmg(melee_dmg), _ranged_dmg(ranged_dmg), _armor(armor)
{
	std::cout << "ClapTrap constructor is called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& obj)
	: _name(obj._name), _hp(obj._hp), _max_hp(obj._max_hp), _energy(obj._energy),
	_max_energy(obj._max_energy), _level(obj._level), _melee_dmg(obj._melee_dmg),
	_ranged_dmg(obj._ranged_dmg), _armor(obj._armor)
{
	std::cout << "ClapTrap copy construcor is called" << std::endl;
}

ClapTrap::~ClapTrap(void) {std::cout << "ClapTrap destructor is called" << std::endl;}

ClapTrap& ClapTrap:: operator=(const ClapTrap& obj)
{
	std::cout << "ClapTrap assignment operator is called" << std::endl;
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

std::string ClapTrap::get_name(void) const
{
	return (_name);
}

unsigned int ClapTrap::get_melee_dmg(void) const
{
	return (_melee_dmg);
}

unsigned int ClapTrap::get_ranged_dmg(void) const
{
	return (_ranged_dmg);
}

void ClapTrap::rangedAttack(std::string const& target) const
{
	std::cout << "FR4G_TP " << _name << " attacks " << target
			  << " at range, causing " << _ranged_dmg << " points of damage !"
			  << std::endl;
}

void ClapTrap::meleeAttack(std::string const& target) const
{
	std::cout << "FR4G_TP " << _name << " attacks " << target
			  << " at melee, causing " << _melee_dmg << " points of damage !"
			  << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	_hp -= (amount - _armor);
	if (_hp < 0)
		_hp = 0;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	_hp += amount;
	if (_hp > 100)
		_hp = 100;
}
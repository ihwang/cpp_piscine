#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
	: _name(name), _hp(100), _max_hp(100), _energy(50), _max_energy(50),
	_level(1), _melee_dmg(20), _ranged_dmg(15), _armor(3)
{
	std::cout << "Scavtrap constructor is called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& obj)
{
	std::cout << "Scavtrap copy construcor is called" << std::endl;
	*this = obj;
}

ScavTrap::~ScavTrap(void) {std::cout << "Scavtrap destructor is called" << std::endl;}

ScavTrap& ScavTrap:: operator=(const ScavTrap& obj)
{
	std::cout << "Scavtrap assignment operator is called" << std::endl;
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

std::string ScavTrap::get_name(void) const
{
	return (_name);
}

unsigned int ScavTrap::get_melee_dmg(void) const
{
	return (_melee_dmg);
}

unsigned int ScavTrap::get_ranged_dmg(void) const
{
	return (_ranged_dmg);
}

void ScavTrap::rangedAttack(std::string const& target) const
{
	std::cout << "FR4G_TP " << _name << " attacks " << target
			  << " at range, causing " << _ranged_dmg << " points of damage !"
			  << std::endl;
}

void ScavTrap::meleeAttack(std::string const& target) const
{
	std::cout << "FR4G_TP " << _name << " attacks " << target
			  << " at melee, causing " << _melee_dmg << " points of damage !"
			  << std::endl;
}

void ScavTrap::challengeNewcomer(std::string const& target) const
{
	std::cout << target << "! bring the genie's magic lamp to me" << std::endl;
}
void ScavTrap::takeDamage(unsigned int amount)
{
	_hp -= (amount - _armor);
	if (_hp < 0)
		_hp = 0;
}

void ScavTrap::beRepaired(unsigned int amount)
{
	_hp += amount;
	if (_hp > 100)
		_hp = 100;
}
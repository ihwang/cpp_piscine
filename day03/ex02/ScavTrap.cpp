#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
	: Claptrap(name), _name(name), _hp(100), _max_hp(100), _energy(50), _max_energy(50),
	_level(1), _melee_dmg(20), _ranged_dmg(15), _armor(3)
{
	std::cout << "Scavtrap constructor is called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& obj) : Claptrap(obj._name)
{
	std::cout << "Scavtrap copy construcor is called" << std::endl;
	*this = obj;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Scavtrap destructor is called" << std::endl;
	(void)_hp;
	(void)_max_hp;
	(void)_energy;
	(void)_max_energy;
	(void)_level;
	(void)_melee_dmg;
	(void)_ranged_dmg;
	(void)_armor;
}

void ScavTrap::challengeNewcomer(std::string const& target) const
{
	std::cout << target << "! bring the genie's magic lamp to me" << std::endl;
}
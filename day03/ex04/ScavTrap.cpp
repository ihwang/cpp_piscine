#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
	: ClapTrap(name, 100, 100, 50, 50, 1, 20, 15, 3)
{
	std::cout << "ScavTrap constructor is called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& obj) : ClapTrap(obj)
{
	std::cout << "ScavTrap copy construcor is called" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor is called" << std::endl;
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
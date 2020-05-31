#pragma once

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public Claptrap
{
	std::string _name;
	int _hp;
	int _max_hp;
	int _energy;
	int _max_energy;
	int _level;
	int _melee_dmg;
	int _ranged_dmg;
	int _armor;

	public:
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap& obj);
		~ScavTrap(void);

		void challengeNewcomer(std::string const& target) const;
};

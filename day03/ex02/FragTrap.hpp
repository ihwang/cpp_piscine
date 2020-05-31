#pragma once

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class Fragtrap : public Claptrap
{
	std::string _name;
	int _hp;
	int _max_hp;
	int _energy;
	int _max_energy;
	int _level;
	int _melee_dmg;
	int _ranged_dmg;
	int _vaulthunder_dmg;
	int _armor;

	public:
		Fragtrap(std::string name);
		Fragtrap(const Fragtrap& obj);
		~Fragtrap(void);

		void fooAttack(std::string const& target) const;
		void bombAttack(std::string const& target) const;
		void electronicAttack(std::string const& target) const;

		unsigned int get_vaulthunder_dmg(void) const;
		void vaulthunter_dot_exe(std::string const& target);
};

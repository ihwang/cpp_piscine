#pragma once

#include <iostream>
#include <string>

class ClapTrap
{
	protected:
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
		ClapTrap(std::string name, int hp, int max_hp, int energy,
		int max_energy, int level, int melee_dmg, int ranged_dmg,
		int armor);
		ClapTrap(const ClapTrap& obj);
		~ClapTrap(void);

		ClapTrap& operator=(const ClapTrap& obj);

		std::string get_name(void) const;
		unsigned int get_melee_dmg(void) const;
		unsigned int get_ranged_dmg(void) const;

		void rangedAttack(std::string const& target) const ;
		void meleeAttack(std::string const& target) const;
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

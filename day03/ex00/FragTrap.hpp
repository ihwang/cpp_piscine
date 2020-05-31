#pragma once

#include <iostream>
#include <string>

class Fragtrap
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

		Fragtrap& operator=(const Fragtrap& obj);

		std::string get_name(void) const;
		unsigned int get_melee_dmg(void) const;
		unsigned int get_ranged_dmg(void) const;
		unsigned int get_vaulthunder_dmg(void) const;

		void rangedAttack(std::string const& target) const ;
		void meleeAttack(std::string const& target) const;
		void fooAttack(std::string const& target) const;
		void bombAttack(std::string const& target) const;
		void electronicAttack(std::string const& target) const;
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		void vaulthunter_dot_exe(std::string const& target);
};

#pragma once

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	private:
		int _vaulthunder_dmg;

	public:
		FragTrap(std::string name);
		FragTrap(const FragTrap& obj);
		~FragTrap(void);

		void fooAttack(std::string const& target) const;
		void bombAttack(std::string const& target) const;
		void electronicAttack(std::string const& target) const;

		unsigned int get_vaulthunder_dmg(void) const;
		void vaulthunter_dot_exe(std::string const& target);
};

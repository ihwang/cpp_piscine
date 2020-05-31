#pragma once

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap& obj);
		~ScavTrap(void);

		void challengeNewcomer(std::string const& target) const;
};

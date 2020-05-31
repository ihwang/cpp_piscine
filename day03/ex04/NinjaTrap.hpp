#pragma once

#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : virtual public ClapTrap
{
	public:
		NinjaTrap(std::string name);
		NinjaTrap(const NinjaTrap& obj);
		~NinjaTrap(void);

		void ninjaShoeBox(const ClapTrap& obj);
		void ninjaShoeBox(const FragTrap& obj);
		void ninjaShoeBox(const ScavTrap& obj);
		void ninjaShoeBox(const NinjaTrap& obj);
};

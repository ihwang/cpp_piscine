#pragma once

#include <iostream>
#include <string>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
	std::string Name;
	int AP;
	AWeapon* Weapon;

	public:
		Character(std::string const& name);
		Character(const Character& obj);
		~Character(void);

		Character& operator=(const Character& obj);

		void recoverAP(void);
		void attack(Enemy*);
		void equip(AWeapon*);
		std::string getName(void) const;
		int getAP(void) const;
		bool is_equiped(void) const;
		std::string getWeaponName(void) const;
};

std::ostream& operator<<(std::ostream& os, Character& obj);
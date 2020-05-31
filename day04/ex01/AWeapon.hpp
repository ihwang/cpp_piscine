#pragma once

#include <string>
#include <iostream>

class AWeapon
{
	protected:
   		std::string Name;
    	int AP;
    	int Damage;

    public:
        AWeapon(void);
        AWeapon(std::string const& name, int ap, int damage);
        AWeapon(const AWeapon& obj);
        ~AWeapon(void);

		AWeapon& operator=(const AWeapon& obj);

		std::string getName(void) const;
		int getAPCost(void) const;
		int getDamage(void) const;
		virtual void attack(void) const = 0;
};

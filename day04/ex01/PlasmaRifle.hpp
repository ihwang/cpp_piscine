#pragma once

#include <iostream>
#include <string>
#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
public:
	PlasmaRifle(void);
	PlasmaRifle(const PlasmaRifle &obj);
	~PlasmaRifle(void);

	PlasmaRifle &operator=(const PlasmaRifle &obj);

	void attack(void) const;
};

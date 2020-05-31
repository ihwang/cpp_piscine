#pragma once

#include <iostream>
#include <string>
#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
public:
	PowerFist(void);
	PowerFist(const PowerFist &obj);
	~PowerFist(void);

	PowerFist &operator=(const PowerFist &obj);

	void attack(void) const;
};

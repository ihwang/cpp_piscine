#pragma once

#include <iostream>
#include <string>
#include "Enemy.hpp"

class SuperMutant : public Enemy
{
	SuperMutant(void);
	SuperMutant(const SuperMutant& obj);
	~SuperMutant(void);

	SuperMutant& operator=(const SuperMutant& obj);

	void takeDamage(int damage);
};

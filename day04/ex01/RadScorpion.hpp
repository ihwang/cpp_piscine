#pragma once

#include <iostream>
#include <string>
#include "Enemy.hpp"

class RadScorpion : public Enemy
{
public:
	RadScorpion(void);
	RadScorpion(const RadScorpion &obj);
	~RadScorpion(void);

	RadScorpion &operator=(const RadScorpion &obj);

	void takeDamage(int damage);
};

#pragma once

#include "IMiningLaser.hpp"
#include "IAsteroid.hpp"

class MiningBarge
{
	IMiningLaser* mineInventory[4];

	public:
		MiningBarge(void);
		MiningBarge(const MiningBarge& obj);
		~MiningBarge(void);

		MiningBarge& operator=(const MiningBarge& obj);

		void equip(IMiningLaser*);
		void mine(IAsteroid*) const;
};

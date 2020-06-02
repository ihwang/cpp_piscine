#include "MiningBarge.hpp"

MiningBarge::MiningBarge(void)
{
	for (int i = 0; i < 4; i++)
		mineInventory[i] = NULL;
}

MiningBarge::MiningBarge(const MiningBarge& obj)
{
	*this = obj;
}

MiningBarge::~MiningBarge(void) {}

MiningBarge& MiningBarge::operator=(const MiningBarge& obj)
{
	*this = obj;
	return (*this);
}

void MiningBarge::equip(IMiningLaser* miner)
{
	int i = 0;
	for (; i < 4 && mineInventory[i]; i++)
		NULL;
	mineInventory[i] = miner;
}

void MiningBarge::mine(IAsteroid* asteroid) const
{
	for (int i = 0; mineInventory[i] && i < 4; i++)
		mineInventory[i]->mine(asteroid);
}

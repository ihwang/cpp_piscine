#include "KoalaSteroid.hpp"

KoalaSteroid::KoalaSteroid(void) {}

KoalaSteroid::KoalaSteroid(const KoalaSteroid& obj) {}

KoalaSteroid::~KoalaSteroid(void) {}

KoalaSteroid& KoalaSteroid::operator=(const KoalaSteroid& obj)
{
	return (*this);
}

std::string KoalaSteroid::beMined(StripMiner* miner) const
{
	(void)miner;
	return ("Krpite");
}

std::string KoalaSteroid::beMined(DeepCoreMiner* miner) const
{
	(void)miner;
	return ("Zazium");
}

std::string KoalaSteroid::getName(void) const
{
	return ("KoalaSteroid");
}

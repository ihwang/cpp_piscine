#include "AsteroKreog.hpp"

AsteroKreog::AsteroKreog(void) {}

AsteroKreog::AsteroKreog(const AsteroKreog& obj) {}

AsteroKreog::~AsteroKreog(void) {}

AsteroKreog& AsteroKreog::operator=(const AsteroKreog& obj)
{
	return (*this);
}

std::string AsteroKreog::beMined(StripMiner* miner) const
{
	(void)miner;
	return ("Flavium");
}

std::string AsteroKreog::beMined(DeepCoreMiner* miner) const
{
	(void)miner;
	return ("Thorite");
}

std::string AsteroKreog::getName(void) const
{
	return ("AsteroKreog");
}

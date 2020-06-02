#include "StripMiner.hpp"

StripMiner::StripMiner(void) : Type("StripMiner") {}

StripMiner::StripMiner(const StripMiner& obj) :
	Type(obj.Type) {}

StripMiner::~StripMiner() {}

StripMiner& StripMiner::operator=(const StripMiner& obj)
{
	Type = obj.Type;
	return (*this);
}

void StripMiner::mine(IAsteroid* asteroid)
{
	std::cout << "* strip mining ... got " << asteroid->beMined(this)
			  << " ! *" << std::endl;

}

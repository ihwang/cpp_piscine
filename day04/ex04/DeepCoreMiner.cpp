#include "DeepCoreMiner.hpp"

DeepCoreMiner::DeepCoreMiner(void) : Type("DeepCoreMiner") {}

DeepCoreMiner::DeepCoreMiner(const DeepCoreMiner& obj) :
	Type(obj.Type) {}

DeepCoreMiner::~DeepCoreMiner() {}

DeepCoreMiner& DeepCoreMiner::operator=(const DeepCoreMiner& obj)
{
	Type = obj.Type;
	return (*this);
}

void DeepCoreMiner::mine(IAsteroid* asteroid)
{
	std::cout << "* mining deep ... got " << asteroid->beMined(this) << " ! *" << std::endl;

}

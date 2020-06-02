#pragma once

#include <string>

class StripMiner;
class DeepCoreMiner;

class IAsteroid
{
	public:
		virtual ~IAsteroid(void) {}
		virtual std::string beMined(StripMiner*) const = 0;
		virtual std::string beMined(DeepCoreMiner*) const = 0;
		virtual std::string getName(void) const = 0;
};

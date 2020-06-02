#pragma once

#include <iostream>
#include <string>
#include "IAsteroid.hpp"
#include "StripMiner.hpp"
#include "DeepCoreMiner.hpp"

class AsteroKreog : public IAsteroid
{

	public:
		AsteroKreog(void);
		AsteroKreog(const AsteroKreog& obj);
		virtual ~AsteroKreog(void);

		AsteroKreog& operator=(const AsteroKreog& obj);

		virtual std::string beMined(StripMiner* miner) const;
		virtual std::string beMined(DeepCoreMiner* miner) const;
		virtual std::string getName(void) const;
};

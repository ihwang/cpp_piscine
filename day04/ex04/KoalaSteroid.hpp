#pragma once

#include <iostream>
#include <string>
#include "IAsteroid.hpp"
#include "DeepCoreMiner.hpp"
#include "StripMiner.hpp"

class KoalaSteroid : public IAsteroid
{

	public:
		KoalaSteroid(void);
		KoalaSteroid(const KoalaSteroid& obj);
		virtual ~KoalaSteroid(void);

		KoalaSteroid& operator=(const KoalaSteroid& obj);

		virtual std::string beMined(StripMiner* miner) const;
		virtual std::string beMined(DeepCoreMiner* miner) const;
		virtual std::string getName(void) const;
};

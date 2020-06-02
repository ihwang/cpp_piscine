#pragma once

#include <string>
#include <iostream>
#include "IMiningLaser.hpp"

class StripMiner : public IMiningLaser
{
	std::string Type;

	public :
		StripMiner(void);
		StripMiner(const StripMiner& obj);
		virtual ~StripMiner();

		StripMiner& operator=(const StripMiner& obj);
		
		virtual void mine(IAsteroid*);
		std::string getType(void) const;
};

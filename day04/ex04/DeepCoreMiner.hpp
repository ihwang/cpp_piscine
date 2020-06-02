#pragma once

#include <iostream>
#include <string>
#include "IMiningLaser.hpp"

class IAsteroid;

class DeepCoreMiner : public IMiningLaser
{
	std::string Type;

	public :
		DeepCoreMiner(void);
		DeepCoreMiner(const DeepCoreMiner& obj);
		virtual ~DeepCoreMiner();

		DeepCoreMiner& operator=(const DeepCoreMiner& obj);
		
		virtual void mine(IAsteroid*);
		std::string getType(void) const;
};

#pragma once

#include <iostream>
#include <string>

class Enemy
{
	protected:
		std::string Type;
		int HP;

	public:
		Enemy(void);
		Enemy(std::string type, int hp);
		Enemy(const Enemy& obj);
		virtual ~Enemy(void);

		Enemy& operator=(const Enemy& obj);

		std::string getType(void) const;
		int getHP(void) const;

		virtual void takeDamage(int);
};

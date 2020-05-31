#include "Enemy.hpp"

Enemy::Enemy(void) {}

Enemy::Enemy(std::string type, int hp) :
	Type(type), HP(hp) {}

Enemy::Enemy(const Enemy& obj)
{
	Type = obj.Type;
	HP = obj.HP;
}

Enemy::~Enemy(void) {}

Enemy& Enemy::operator=(const Enemy& obj)
{
	Type = obj.Type;
	HP = obj.HP;
	return (*this);
}

std::string Enemy::getType(void) const
{
	return (Type);
}

int Enemy::getHP(void) const
{
	return (HP);
}

void Enemy::takeDamage(int) {}

#include "player.h"

using namespace Harmonia;

Player::Player(std::string name, Vec2* location, Dimensions dimensions, Shine* shine, float speed) : Entity(name, location, dimensions, shine)
{
	this->speed = speed;
	this->movement = { 0, 0 };
}

void Player::update(float dt)
{
	*this->location += (movement.normalize() * speed * dt);
	Entity::update(dt);
}

void Player::move(Vec2 input)
{
	movement = input;
}

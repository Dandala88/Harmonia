#include "player.h"

using namespace Harmonia;

Player::Player(std::string name, Harmonia::Vec2* location, Dimensions dimensions, Shine* shine, float speed) : Entity(name, location, dimensions, shine)
{
	this->speed = speed;
	this->movement = { 0, 0 };
}

void Player::Update(float dt)
{
	Harmonia::Log::info("Updating player");
	*this->location += (movement.normalize() * speed * dt);
}

void Player::Move(Harmonia::Vec2 input)
{
	movement = input;
}

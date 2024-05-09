#pragma once
#include "entity.h"
#include "log.h"

namespace Harmonia
{
	class Player : public Entity
	{
	public:
		float speed;
		Vec2 movement;

		Player(std::string name, Vec2 startLocation, Dimensions dimensions, Shine* shine, float speed);

		void update(float dt) override;
		void move(Vec2 input);
	};
}
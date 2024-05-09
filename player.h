#pragma once
#include "entity.h";
#include "log.h"

namespace Harmonia
{
	class Player : public Harmonia::Entity
	{
	public:
		float speed;
		Vec2 movement;

		Player(std::string name, Vec2* location, Dimensions dimensions, Shine* shine, float speed);

		void Update(float dt) override;
		void Move(Harmonia::Vec2 input);
	};
}
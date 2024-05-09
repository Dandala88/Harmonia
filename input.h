#pragma once
#include "entity.h"
#include <functional>

namespace Harmonia
{
	class Input
	{
	public:
		std::function<void(Vec2)> directional;
		std::function<void()> action_a;
		std::function<void()> action_b;

		Entity* control;

		Input(Entity* control);

		void Update(float deltaTime);
	};
}
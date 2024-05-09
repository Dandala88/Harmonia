#pragma once
#include "entity.h"

namespace Harmonia
{
	class Input
	{
	public:
		Entity* control;
		//Speed cannot stay here but is a temporary measure to finish the entity base class
		float speed;

		Input(Entity* control, float speed);

		void Update(float deltaTime);
	};
}
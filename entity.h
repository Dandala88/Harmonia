#pragma once
#include <string>
#include "dimensions.h"
#include "vec2.h"
#include <list>
#include "shine.h"


namespace Harmonia
{
	class Entity
	{
	public:
		std::string name;
		Vec2* location;
		Dimensions dimensions;
		Shine* shine;
		static std::list<Entity> entities;

		Entity(std::string name, Vec2* location, Dimensions dimensions, Shine* shine);

		bool Create();
		void Update(float dt);
		void Destroy();

		~Entity();
	};
}
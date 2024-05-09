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

		virtual bool Create();
		virtual void Update(float dt);
		virtual void Destroy();

		~Entity();
	};
}
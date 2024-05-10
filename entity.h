#pragma once
#include <string>
#include "dimensions.h"
#include "vec2.h"
#include <list>
#include "shine.h"
#include "bounding_box.h"


namespace Harmonia
{
	class Entity
	{
	public:
		std::string name;
		Vec2 startLocation;
		Dimensions dimensions;
		Shine* shine;
		BoundingBox* boundingBox;

		static std::list<Entity*> entities;

		Entity(std::string name, Vec2 startLocation, Dimensions dimensions, Shine* shine);

		virtual bool create();
		virtual void update(float dt);
		virtual void destroy();

		virtual void addMotion(Vec2 movement);

		~Entity();

	protected:
		Vec2* location;
	};
}
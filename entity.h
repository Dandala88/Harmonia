#pragma once
#include <string>
#include "dimensions.h"
#include "vector2.h"
#include <list>


namespace Harmonia
{
	class Entity
	{
	public:
		std::string name;
		Vector2 position;
		Dimensions dimensions;
		static std::list<Entity> entities;

		Entity(std::string name, Vector2 position, Dimensions dimensions);

		bool Create();
		void Update(float dt);
		void Destroy();

		~Entity();
	};
}
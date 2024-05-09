#include "entity.h"

namespace Harmonia
{	
	std::list<Entity*> Entity::entities;

	Entity::Entity(std::string name, Vec2 startLocation, Dimensions dimensions, Shine* shine) : name(name), startLocation(startLocation), dimensions(dimensions), shine(shine)
	{
		//initialzing location and boundingbox but should be overwritten in create()
		Vec2 baseLocation{ 0.0, 0.0 };
		location = &baseLocation;
		BoundingBox baseBoundingBox{ *location, dimensions };
		boundingBox = &baseBoundingBox;
		Entity::entities.push_back(this);
	}

	bool Harmonia::Entity::create()
	{
		printf("Creating entity %s\n", name.c_str());	
		location = &startLocation;
		boundingBox->center = *location;
		boundingBox->dimensions = dimensions;
		return true;
	}

	void Harmonia::Entity::update(float dt)
	{
		shine->location = *location;
		boundingBox->center = *location;
		boundingBox->dimensions = dimensions;
	}

	void Harmonia::Entity::destroy()
	{
		printf("Destroying entity %s\n", name.c_str());
	}

	Harmonia::Entity::~Entity()
	{
	}
}
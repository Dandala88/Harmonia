#include "entity.h"

namespace Harmonia
{	
	std::list<Entity*> Entity::entities;

	Entity::Entity(std::string name, Vec2 startLocation, Dimensions dimensions, Shine* shine) : name(name), startLocation(startLocation), dimensions(dimensions), shine(shine)
	{
		Entity::entities.push_back(this);
	}

	bool Harmonia::Entity::Create()
	{
		printf("Creating entity %s", name.c_str());	
		location = &startLocation;
		return true;
	}

	void Harmonia::Entity::update(float dt)
	{
		shine->location = *location;
	}

	void Harmonia::Entity::Destroy()
	{
		printf("Destroying entity %s", name.c_str());
	}

	Harmonia::Entity::~Entity()
	{
	}
}
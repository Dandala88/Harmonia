#include "entity.h"

namespace Harmonia
{	
	std::list<Entity> Entity::entities;

	Entity::Entity(std::string name, Vec2* location, Dimensions dimensions, Shine* shine) : name(name), location(location), dimensions(dimensions), shine(shine)
	{
		Entity::entities.push_back(*this);
	}

	bool Harmonia::Entity::Create()
	{
		printf("Creating entity %s", name.c_str());	
		return true;
	}

	void Harmonia::Entity::Update(float dt)
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
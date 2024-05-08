#include "entity.h"

namespace Harmonia
{	
	std::list<Entity> Entity::entities;

	Entity::Entity(std::string name, Vector2 position, Dimensions dimensions) : name(name), position(position), dimensions(dimensions)
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
	}

	void Harmonia::Entity::Destroy()
	{
		printf("Destroying entity %s", name.c_str());
	}

	Harmonia::Entity::~Entity()
	{
	}
}
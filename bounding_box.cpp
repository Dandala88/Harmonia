#include "bounding_box.h"

Harmonia::BoundingBox::BoundingBox(Vec2 center, Dimensions dimensions) : center(center), dimensions(dimensions)
{
}

float Harmonia::BoundingBox::minX()
{
	return center.x - (dimensions.w / 2);
}

float Harmonia::BoundingBox::maxX()
{
	return center.x + (dimensions.w / 2);
}

float Harmonia::BoundingBox::minY()
{
	return center.y - (dimensions.h / 2);
}

float Harmonia::BoundingBox::maxY()
{
	return center.y + (dimensions.h / 2);
}

bool Harmonia::BoundingBox::operator[](BoundingBox other)
{
	if (maxX() < other.minX() || minX() > other.maxX())
		return false;

	if (maxY() < other.minY() || minY() > other.maxY())
		return false;

	return true;
}

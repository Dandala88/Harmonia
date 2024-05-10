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

Harmonia::Vec2 Harmonia::BoundingBox::getOverlap(BoundingBox other)
{
    float overlapX = std::max(0.0f, std::min(maxX(), other.maxX()) - std::max(minX(), other.minX()));
    float overlapY = std::max(0.0f, std::min(maxY(), other.maxY()) - std::max(minY(), other.minY()));

    if (overlapX < overlapY) {
        if (minX() < other.minX()) {
            return Vec2{ -overlapX, 0.0 };
        }
        else {
            return Vec2{ overlapX, 0.0 };
        }
    }
    else {
        if (minY() < other.minY()) {
            return Vec2{ 0.0, -overlapY };
        }
        else {
            return Vec2{ 0.0, overlapY };
        }
    }
}

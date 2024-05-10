#pragma once
#include "dimensions.h"
#include "vec2.h"
#include <algorithm>

namespace Harmonia
{
	class BoundingBox
	{
	public:
		Vec2 center;
		Dimensions dimensions;

		BoundingBox(Vec2 center, Dimensions dimensions);

		float minX();
		float maxX();
		float minY();
		float maxY();

		bool operator[](BoundingBox other);
		Vec2 getOverlap(BoundingBox other);
	};
}


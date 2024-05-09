#pragma once
#include "dimensions.h"
#include "shine.h"

namespace Harmonia
{
	class Rectangle: public Shine
	{
	public:
		Dimensions dimensions;

		Rectangle(Vec2 location, Dimensions dimensions, Color color);

		void Render(SDL_Renderer* renderer) override;
	};

}
#pragma once
#include "vec2.h"
#include <SDL.h>
#include "color.h"

namespace Harmonia
{
	class Shine
	{
	public:
		Vec2 location;
		Color color;

		Shine(Vec2 location, Color color);

		virtual void Render(SDL_Renderer* renderer);
	};
}
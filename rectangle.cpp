#include "rectangle.h"

Harmonia::Rectangle::Rectangle(Vec2 location, Dimensions dimensions, Color color) : Shine(location, color)
{
    this->dimensions = dimensions;
}

void Harmonia::Rectangle::Render(SDL_Renderer* renderer)
{
    SDL_SetRenderDrawColor(renderer, color.r, color.g, color.b, color.a);
    SDL_Rect rect = { location.x, location.y, dimensions.w, dimensions.h };
    SDL_RenderFillRect(renderer, &rect);
}
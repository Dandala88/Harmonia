#pragma once
#include "SDL.h"
#include "dimensions.h"
#include "entity.h"
#include <stdio.h>

namespace Harmonia
{
    class Game
    {
    public:
        Dimensions dimensions;
        SDL_Window* window = NULL;
        SDL_Renderer* renderer = NULL;
        SDL_Event e;
        bool alive = true;

        //hooks
        bool create();
        void update();
        void destroy();
    };
}
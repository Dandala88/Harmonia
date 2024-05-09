#pragma once
#include "SDL.h"
#include "entity.h"
#include <stdio.h>
#include "input.h"

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
        float lastTick = 0;
        int currentFrame = 1;

        //hooks
        bool create();
        void update(Input* input);
        void destroy();
    };
}
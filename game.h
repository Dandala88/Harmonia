#pragma once
#include "SDL.h"
#include "dimensions.h"
#include <stdio.h>

class Game
{
public:
    Dimensions dimensions;
    SDL_Window* window = NULL;
    SDL_Renderer* renderer = NULL;
    SDL_Event e;
    bool alive = true;

    //I think game needs a list of entities and it calls the lifecyle hooks of each entity in it's respectictive hook below
    //hooks
    bool create();
    void update();
    void destroy();
};
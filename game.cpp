#include "game.h"

namespace Harmonia
{

	bool Game::create()
	{
		if (SDL_Init(SDL_INIT_VIDEO) < 0)
		{
			printf("SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
			return false;
		}
		else
		{
			window = SDL_CreateWindow("SDL2 Template", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, dimensions.w, dimensions.h, SDL_WINDOW_SHOWN);

			renderer = SDL_CreateRenderer(window, -1, 0);

			if (renderer == NULL || window == NULL)
			{
				printf("Window or Renderer could not be created! SDL Error: %s\n", SDL_GetError());
				return false;
			}
		}

		for (auto entity : Entity::entities)
		{
			if (!entity.Create())
				return false;
		}

		return true;
	}

	void Game::update(Input* input)
	{
		while (alive)
		{
			SDL_SetRenderDrawColor(renderer, 0xFF, 0xFF, 0xFF, 0xFF);
			SDL_RenderClear(renderer);

			 while (SDL_GetTicks64() < lastTick + 16);
			 float deltaTime = (SDL_GetTicks64() / currentFrame) / 1000.0;
			 lastTick = SDL_GetTicks64();

			 input->Update(deltaTime);

			SDL_UpdateWindowSurface(window);

			while (SDL_PollEvent(&e) != 0)
			{
				if (e.type == SDL_QUIT)
				{
					alive = false;
				}
			}

			for (auto entity : Entity::entities)
			{
				entity.Update(deltaTime);
				entity.shine->Render(renderer);
			}

			SDL_RenderPresent(renderer);

			++currentFrame;
		}
	}

	void Game::destroy()
	{
		SDL_DestroyRenderer(renderer);
		SDL_DestroyWindow(window);
		window = NULL;
		renderer = NULL;

		SDL_Quit();
	}
}
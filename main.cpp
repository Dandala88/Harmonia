#include <SDL.h>
#include "game.h"

Game game =
{
	{ 640, 480 },
};

int main(int argc, char* args[])
{
	if (game.create())
	{
		game.update();
	}

	game.destroy();

	return 0;
}
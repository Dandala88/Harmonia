#include <SDL.h>
#include "game.h"

using namespace Harmonia;

Game game =
{
	{ 640, 480 },
};

Entity player =
{
	"Player",
	{ 0.0, 0.0 },
	{ 16, 16 },
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
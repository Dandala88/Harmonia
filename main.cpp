#include <SDL.h>
#include "game.h"
#include "rectangle.h"

using namespace Harmonia;

Game game =
{
	{ 640, 480 },
};

Rectangle playerRect
{
	{ 0.0, 0.0 },
	{ 16, 16 },
	{0, 0, 255 },
};

Vec2 playerPosition = { 0, 0 };

Entity player =
{
	"Player",
	&playerPosition,
	{ 16, 16 },
	&playerRect,
};

Input input(&player, 100);

int main(int argc, char* args[])
{
	if (game.create())
	{
		game.update(&input);
	}

	game.destroy();

	return 0;
}
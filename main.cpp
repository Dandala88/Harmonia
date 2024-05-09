#include <SDL.h>
#include "game.h"
#include "rectangle.h"
#include "player.h"

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

Player player =
{
	"Player",
	{ 100, 100 },
	{ 16, 16 },
	&playerRect,
	100,
};

Input input(&player);

int main(int argc, char* args[])
{
	if (game.create())
	{
		input.directional = ([&](Vec2 vec) { player.move(vec); });
		game.update(&input);
	}

	game.destroy();

	return 0;
}
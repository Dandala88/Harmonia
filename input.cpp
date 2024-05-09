#include "input.h"

Harmonia::Input::Input(Entity* control) : control(control){}

void Harmonia::Input::Update(float deltaTime)
{
	const Uint8* keyState = SDL_GetKeyboardState(NULL);

	Vec2 input = { 0.0, 0.0 };
	bool inputMade = false;
	if (keyState[SDL_SCANCODE_W])
	{
		input.y = -1.0;
		inputMade = true;
	}

	if (keyState[SDL_SCANCODE_S])
	{
		input.y = 1.0;
		inputMade = true;
	}

	if (keyState[SDL_SCANCODE_A])
	{
		input.x = -1.0;
		inputMade = true;
	}

	if (keyState[SDL_SCANCODE_D])
	{
		input.x = 1.0;
		inputMade = true;
	}
	directional(input);

	if (keyState[SDL_SCANCODE_RETURN])
	{
		action_a();
	}

	if (keyState[SDL_SCANCODE_RSHIFT])
	{
		action_b();
	}
}

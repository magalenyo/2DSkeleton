#include "ModuleScene.h"
#include "Application.h"
#include "ModuleTextures.h"
#include "ModuleRender.h"
#include "SDL/include/SDL.h"

ModuleScene::ModuleScene()
{
	
}

ModuleScene::~ModuleScene()
{
}

bool ModuleScene::Init()
{
	return loadFirstScene();
}

bool ModuleScene::CleanUp()
{
	return true;
}

bool ModuleScene::loadFirstScene()
{
	SDL_Texture* texture = App->textures->Load("ig.png");
	// the first two parameters is how moved the image is
	// the 3rd and 4th the size of the rectangle
	SDL_Rect location = { 250, 0, 150, 300 };

	// 2nd and 3rd parameter are the init position
	// App->renderer->Blit(texture, 0, 0, &location);
	App->renderer->Blit(texture, SCREEN_WIDTH / 2, SCREEN_HEIGHT / 2, nullptr);

	return true;
}

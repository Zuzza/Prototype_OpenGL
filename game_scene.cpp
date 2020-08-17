#include "game_scene.h"
#include "input.h"
#include "my_own_triangle.h"
#include "my_rectangle.h"
#include "hyper_hexagon.h"
#include "cool_cube.h"
#include "pyramid.h"

Game_Scene::Game_Scene()
	: Scene("Game")
{
}

Game_Scene::~Game_Scene()
{
}

void Game_Scene::update(const double, Input* input)
{
	if (input->is_button_state(Input::Button::ONE, Input::Button_State::DOWN))
	{
		_game_objects.clear();
		My_Rectangle* my_rectangle = new My_Rectangle("Game_Object.My_Rectangle");
		_game_objects[my_rectangle->id()] = my_rectangle;
	}
	if (input->is_button_state(Input::Button::TWO, Input::Button_State::DOWN))
	{
		_game_objects.clear();
		My_Own_Triangle* my_own_triangle = new My_Own_Triangle("Game_Object.My_Own_Triangle");
		_game_objects[my_own_triangle->id()] = my_own_triangle;
	}
	if (input->is_button_state(Input::Button::THREE, Input::Button_State::DOWN))
	{
		_game_objects.clear();
		Hyper_Hexagon* hyper_hexagon = new Hyper_Hexagon("Game_Object.Hyper_Hexagon");
		_game_objects[hyper_hexagon->id()] = hyper_hexagon;
	}
	if (input->is_button_state(Input::Button::FOUR, Input::Button_State::DOWN))
	{
		_game_objects.clear();
		Cool_Cube* cool_cube = new Cool_Cube("Game_Object.Cube", "Mesh.Cube", "Texture.cake");
		_game_objects[cool_cube->id()] = cool_cube;
	}
	if (input->is_button_state(Input::Button::FIVE, Input::Button_State::DOWN))
	{
		_game_objects.clear();
		Cool_Cube* cool_cube = new Cool_Cube("Game_Object.Cube.Textured", "Mesh.Cube.Textured", "Texture.lava");
		_game_objects[cool_cube->id()] = cool_cube;
	}
	if (input->is_button_state(Input::Button::SIX, Input::Button_State::DOWN))
	{
		_game_objects.clear();
		Pyramid* pyramid = new Pyramid("Game_Object.Pyramid");
		_game_objects[pyramid->id()] = pyramid;
	}
}
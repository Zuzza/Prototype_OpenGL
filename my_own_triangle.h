#pragma once

#include "game_object.h"

class My_Own_Triangle : public Game_Object
{
public:
	My_Own_Triangle(const char* id);
	~My_Own_Triangle();

	virtual void simulate_AI(const double seconds_to_simulate, const Assets* assets, const Scene* scene, const Configuration* config) override;
	virtual void render(const double seconds_to_simulate, const Assets* assets, const Scene* scene, const Configuration* config) override;

};

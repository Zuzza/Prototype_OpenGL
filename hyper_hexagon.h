#pragma once

#include "game_object.h"

class Hyper_Hexagon : public Game_Object
{
public:
	Hyper_Hexagon(const char* id);
	~Hyper_Hexagon();

	virtual void simulate_AI(const double seconds_to_simulate, const Assets* assets, const Scene* scene, const Configuration* config) override;
	virtual void render(const double seconds_to_simulate, const Assets* assets, const Scene* scene, const Configuration* config) override;

};

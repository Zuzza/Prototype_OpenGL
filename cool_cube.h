#pragma once

#include "game_object.h"

class Cool_Cube : public Game_Object
{
public:
	Cool_Cube(const char* id, const char* mesh_name, const char* texture_name);
	~Cool_Cube();

	virtual void simulate_AI(const double seconds_to_simulate, const Assets* assets, const Scene* scene, const Configuration* config) override;
	virtual void render(const double seconds_to_simulate, const Assets* assets, const Scene* scene, const Configuration* config) override;

private:
	const char* _mesh_name;
	const char* _texture_name;
};

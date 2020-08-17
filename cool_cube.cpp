#include "cool_cube.h"
#include "textured_3D_shader_program.h"
#include "assets.h"
#include "mesh.h"

#include <glm/mat4x4.hpp>
#include <glm/vec4.hpp>
#include <glm/gtx/transform.hpp>

#define GLEW_STATIC
#include <glew.h>

#include <vector>
#include <math.h>

Cool_Cube::Cool_Cube(const char* id, const char* mesh_name, const char* texture_name)
	: Game_Object(id)
{
	_mesh_name = mesh_name;
	_texture_name = texture_name;
}
Cool_Cube::~Cool_Cube()
{
}

void Cool_Cube::simulate_AI(const double, const Assets*, const Scene*, const Configuration*)
{
}
void Cool_Cube::render(const double seconds_to_simulate, const Assets* assets, const Scene* scene, const Configuration* config)
{
	static double total_time = 0;
	total_time += seconds_to_simulate;

	_rotation.x = 0.5f;
	_rotation.y = 0.5f;

	const Mesh* mesh = (Mesh*)assets->get_asset(_mesh_name);
	glm::mat4 trans = transformation(scene, config);

	const Textured_3D_Shader_Program* program = (Textured_3D_Shader_Program*)assets->get_asset("Shader_Program.3D.Textured");
	const Texture* texture = (Texture*)assets->get_asset(_texture_name);
	program->render(config, mesh, texture, &trans);
}
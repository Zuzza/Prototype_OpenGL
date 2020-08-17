#include "my_own_triangle.h"
#include "textured_2D_shader_program.h"
#include "assets.h"

#define GLEW_STATIC
#include <glew.h>

#include <vector>
#include <math.h>

My_Own_Triangle::My_Own_Triangle(const char* id)
	: Game_Object(id)
{
}
My_Own_Triangle::~My_Own_Triangle()
{
}

void My_Own_Triangle::simulate_AI(const double, const Assets*, const Scene*, const Configuration*)
{
}
void My_Own_Triangle::render(const double, const Assets* assets, const Scene* scene, const Configuration* config)
{
	const Textured_2D_Shader_Program* program = (Textured_2D_Shader_Program*)assets->get_asset("Shader_Program.2D.Textured");
	const Mesh* mesh = (Mesh*)assets->get_asset("Mesh.Right.Triangle");
	const Texture* texture = (Texture*)assets->get_asset("pink.feathers");

	const glm::mat4x4 transformation = Game_Object::transformation(scene, config);

	program->render(config, mesh, texture, &transformation);
}
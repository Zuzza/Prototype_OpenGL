#include "assets.h"
#include "shader.h"
#include "texture.h"
#include "textured_2D_shader_program.h"
#include "textured_3D_shader_program.h"
#include "cube_mesh.h"
#include "right_triangle_mesh.h"
#include "rectangle_mesh.h"
#include "hexagon_mesh.h"
#include "textured_cube_mesh.h"
#include "pyramid_mesh.h"

#define GLEW_STATIC
#include <glew.h>

#include <iostream>

Assets::Assets()
{
	Cube_Mesh* cube_mesh = new Cube_Mesh();
	_assets.insert({ cube_mesh->id(), cube_mesh });

	Hexagon_Mesh* hexagon_mesh = new Hexagon_Mesh();
	_assets.insert({ hexagon_mesh->id(), hexagon_mesh });

	Textured_Cube_Mesh* textured_cube_mesh = new Textured_Cube_Mesh();
	_assets.insert({ textured_cube_mesh->id(), textured_cube_mesh });

	Right_Triangle_Mesh* right_traingle_mesh = new Right_Triangle_Mesh();
	_assets.insert({ right_traingle_mesh->id(), right_traingle_mesh });

	Rectangle_Mesh* rectangle_mesh = new Rectangle_Mesh();
	_assets.insert({ rectangle_mesh->id(), rectangle_mesh });

	Pyramid_Mesh* pyramid_mesh = new Pyramid_Mesh();
	_assets.insert({ pyramid_mesh->id(), pyramid_mesh });

	Shader* textured_2D_vertex_shader = new Shader("Shader.Textured.2D.Vertex", "Shaders/textured.2D.vertex_shader.glsl", Shader::Type::Vertex);
	_assets.insert({textured_2D_vertex_shader->id(), textured_2D_vertex_shader});

	Shader* textured_2D_fragment_shader = new Shader("Shader.Textured.2D.Fragment", "Shaders/textured.2D.fragment_shader.glsl", Shader::Type::Fragment);
	_assets.insert({textured_2D_fragment_shader->id(), textured_2D_fragment_shader});

	Textured_2D_Shader_Program* textured_2D_program = new Textured_2D_Shader_Program(textured_2D_vertex_shader, textured_2D_fragment_shader);
	_assets.insert({textured_2D_program->id(), textured_2D_program});

	Shader* textured_3D_vertex_shader = new Shader("Shader.Textured.3D.Vertex", "Shaders/textured.3D.vertex_shader.glsl", Shader::Type::Vertex);
	_assets.insert({textured_3D_vertex_shader->id(), textured_3D_vertex_shader});

	Shader* textured_3D_fragment_shader = new Shader("Shader.Textured.3D.Fragment", "Shaders/textured.3D.fragment_shader.glsl", Shader::Type::Fragment);
	_assets.insert({textured_3D_fragment_shader->id(), textured_3D_fragment_shader});

	Textured_3D_Shader_Program* textured_3D_program = new Textured_3D_Shader_Program(textured_3D_vertex_shader, textured_3D_fragment_shader);
	_assets.insert({textured_3D_program->id(), textured_3D_program});

	Texture* crate_texture = new Texture("Texture.Crate", "Assets/texture.crate.jpg");
	_assets.insert({crate_texture->id(), crate_texture});

	Texture* crate_sides_texture = new Texture("Texture.Crate_With_Sides_Marked", "Assets/texture.crate_with_sides_marked.jpg");
	_assets.insert({crate_sides_texture->id(), crate_sides_texture});

	Texture* fabric_texture = new Texture("Texture.cake", "Assets/cake.jpg");
	_assets.insert({ fabric_texture->id(), fabric_texture });

	Texture* lava_texture = new Texture("Texture.lava", "Assets/lava.jpg");
	_assets.insert({ lava_texture->id(), lava_texture });

	Texture* kratka_texture = new Texture("Texture.kratka", "Assets/kratka.jpg");
	_assets.insert({ kratka_texture->id(), kratka_texture });

	Texture* yellow_texture = new Texture("all.yellow", "Assets/all.yellow.jpg");
	_assets.insert({ yellow_texture->id(), yellow_texture });

	Texture* art_texture = new Texture("art.texture", "Assets/Art.jpg");
	_assets.insert({ art_texture->id(), art_texture });

	Texture* flamingo_texture = new Texture("pink.feathers", "Assets/feathers.jpg");
	_assets.insert({ flamingo_texture->id(), flamingo_texture });
}
Assets::~Assets()
{
}

const Asset* Assets::get_asset(const char* id) const
{
	if(_assets.find(id) == _assets.end())
	{
		std::cout << "Attempted to find an asset that was not loaded. ID: " << id << std::endl;
		exit(1);
	}

	return _assets.find(id)->second;
}
#pragma once
#include "hexagon_mesh.h"

Hexagon_Mesh::Hexagon_Mesh()
	: Mesh("Mesh.Hexagon")
{
	_verticies.insert(_verticies.end(), { 0.0f, 1.0f });  
	_verticies.insert(_verticies.end(), { 0.0f, 0.0f }); 
	_verticies.insert(_verticies.end(), { 1.0f, 0.5f });  

	_verticies.insert(_verticies.end(), { 1.0f, 0.5f });
	_verticies.insert(_verticies.end(), { 0.0f, 0.0f });
	_verticies.insert(_verticies.end(), { 1.0f, -0.5f });

	_verticies.insert(_verticies.end(), { 1.0f, -0.5f });
	_verticies.insert(_verticies.end(), { 0.0f, 0.0f });
	_verticies.insert(_verticies.end(), { 0.0f, -1.0f });

	_verticies.insert(_verticies.end(), { 0.0f, -1.0f });
	_verticies.insert(_verticies.end(), { 0.0f, 0.0f });
	_verticies.insert(_verticies.end(), { -1.0f, -0.5f });

	_verticies.insert(_verticies.end(), { -1.0f, -0.5f });
	_verticies.insert(_verticies.end(), { 0.0f, 0.0f });
	_verticies.insert(_verticies.end(), { -1.0f, 0.5f });

	_verticies.insert(_verticies.end(), { -1.0f, 0.5f });
	_verticies.insert(_verticies.end(), { 0.0f, 0.0f });
	_verticies.insert(_verticies.end(), { 0.0f, 1.0f });

	_texture_coordinates.insert(_texture_coordinates.end(), { 0.5f, 1.0f });
	_texture_coordinates.insert(_texture_coordinates.end(), { 0.5f, 0.5f });
	_texture_coordinates.insert(_texture_coordinates.end(), { 1.0f, 0.75f });

	_texture_coordinates.insert(_texture_coordinates.end(), { 1.0f, 0.75f });
	_texture_coordinates.insert(_texture_coordinates.end(), { 0.5f, 0.5f });
	_texture_coordinates.insert(_texture_coordinates.end(), { 1.0f, 0.25f });

	_texture_coordinates.insert(_texture_coordinates.end(), { 1.0f, 0.25f });
	_texture_coordinates.insert(_texture_coordinates.end(), { 0.5f, 0.5f });
	_texture_coordinates.insert(_texture_coordinates.end(), { 0.5f, 0.0f });

	_texture_coordinates.insert(_texture_coordinates.end(), { 0.5f, 0.0f });
	_texture_coordinates.insert(_texture_coordinates.end(), { 0.5f, 0.5f });
	_texture_coordinates.insert(_texture_coordinates.end(), { 0.0f, 0.25f });

	_texture_coordinates.insert(_texture_coordinates.end(), { 0.0f, 0.25f });
	_texture_coordinates.insert(_texture_coordinates.end(), { 0.5f, 0.5f });
	_texture_coordinates.insert(_texture_coordinates.end(), { 0.0f, 0.75f });

	_texture_coordinates.insert(_texture_coordinates.end(), { 0.0f, 0.75f });
	_texture_coordinates.insert(_texture_coordinates.end(), { 0.5f, 0.5f });
	_texture_coordinates.insert(_texture_coordinates.end(), { 0.5f, 1.0f });
}
Hexagon_Mesh::~Hexagon_Mesh()
{
}
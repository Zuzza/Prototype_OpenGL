#pragma once
#include "right_triangle_mesh.h"

Right_Triangle_Mesh::Right_Triangle_Mesh()
	: Mesh("Mesh.Right.Triangle")
{
	_verticies.insert(_verticies.end(), { -1.5f, 1.0f }); // v1
	_verticies.insert(_verticies.end(), { -1.5f, -1.5f });  // v2
	_verticies.insert(_verticies.end(), { 2.5f, -1.5f });    // v3

	_texture_coordinates.insert(_texture_coordinates.end(), { 1.0f, 0.0f });
	_texture_coordinates.insert(_texture_coordinates.end(), { 0.f, 1.0f });
	_texture_coordinates.insert(_texture_coordinates.end(), { 0.0f, 0.0f });
}
Right_Triangle_Mesh::~Right_Triangle_Mesh()
{
}
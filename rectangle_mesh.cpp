#pragma once

#include "rectangle_mesh.h"

Rectangle_Mesh::Rectangle_Mesh()
	: Mesh("Mesh.Rectangle")
{
	_verticies.insert(_verticies.end(), { -1.0f, 0.5f });  // v1
	_verticies.insert(_verticies.end(), { -1.0f, -0.5f }); // v2
	_verticies.insert(_verticies.end(), { 1.0f, -0.5f });  // v3
	_verticies.insert(_verticies.end(), { -1.0f, 0.5f });  // v1
	_verticies.insert(_verticies.end(), { 1.0f, -0.5f });  // v3
	_verticies.insert(_verticies.end(), { 1.0f, 0.5f });   // v4

	_texture_coordinates.insert(_texture_coordinates.end(), { 0.0f, 1.0f });
	_texture_coordinates.insert(_texture_coordinates.end(), { 0.0f, 0.0f });
	_texture_coordinates.insert(_texture_coordinates.end(), { 1.0f, 0.0f });
	_texture_coordinates.insert(_texture_coordinates.end(), { 0.0f, 1.0f });
	_texture_coordinates.insert(_texture_coordinates.end(), { 1.0f, 0.0f });
	_texture_coordinates.insert(_texture_coordinates.end(), { 1.0f, 1.0f });
}
Rectangle_Mesh::~Rectangle_Mesh()
{
}
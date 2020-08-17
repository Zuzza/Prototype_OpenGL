#include "pyramid_mesh.h"
#pragma once

Pyramid_Mesh::Pyramid_Mesh()
	: Mesh("Mesh.Pyramid")
{
	auto v1 = { -0.5f, -0.5f, -0.5f };
	auto v2 = { 0.5f, -0.5f, -0.5f };
	auto v3 = { 0.5f, -0.5f, 0.5f };
	auto v4 = { -0.5f, -0.5f, 0.5f };

	auto v5 = { 0.0f, 0.5f, 0.0f };

	auto tl = { 0.0f, 1.0f };
	auto tr = { 1.0f, 1.0f };
	auto br = { 1.0f, 0.0f };
	auto bl = { 0.0f, 0.0f };
	auto p = { 0.5f, 1.0f };

	// Bottom Face
	_verticies.insert(_verticies.end(), v1);
	_verticies.insert(_verticies.end(), v4);
	_verticies.insert(_verticies.end(), v2);
	_verticies.insert(_verticies.end(), v2);
	_verticies.insert(_verticies.end(), v4);
	_verticies.insert(_verticies.end(), v3);

	_texture_coordinates.insert(_texture_coordinates.end(), bl);
	_texture_coordinates.insert(_texture_coordinates.end(), tl);
	_texture_coordinates.insert(_texture_coordinates.end(), br);
	_texture_coordinates.insert(_texture_coordinates.end(), br);
	_texture_coordinates.insert(_texture_coordinates.end(), tl);
	_texture_coordinates.insert(_texture_coordinates.end(), tr);

	// Right Face
	_verticies.insert(_verticies.end(), v2);
	_verticies.insert(_verticies.end(), v3);
	_verticies.insert(_verticies.end(), v5);

	_texture_coordinates.insert(_texture_coordinates.end(), bl);
	_texture_coordinates.insert(_texture_coordinates.end(), br);
	_texture_coordinates.insert(_texture_coordinates.end(), p);

	// Back Face
	_verticies.insert(_verticies.end(), v3);
	_verticies.insert(_verticies.end(), v4);
	_verticies.insert(_verticies.end(), v5);

	_texture_coordinates.insert(_texture_coordinates.end(), br);
	_texture_coordinates.insert(_texture_coordinates.end(), bl);
	_texture_coordinates.insert(_texture_coordinates.end(), p);

	// Left Face
	_verticies.insert(_verticies.end(), v4);
	_verticies.insert(_verticies.end(), v1);
	_verticies.insert(_verticies.end(), v5);

	_texture_coordinates.insert(_texture_coordinates.end(), bl);
	_texture_coordinates.insert(_texture_coordinates.end(), br);
	_texture_coordinates.insert(_texture_coordinates.end(), p);

	// Front Face
	_verticies.insert(_verticies.end(), v1);
	_verticies.insert(_verticies.end(), v2);
	_verticies.insert(_verticies.end(), v5);

	_texture_coordinates.insert(_texture_coordinates.end(), bl);
	_texture_coordinates.insert(_texture_coordinates.end(), br);
	_texture_coordinates.insert(_texture_coordinates.end(), p);

}
Pyramid_Mesh::~Pyramid_Mesh()
{
}
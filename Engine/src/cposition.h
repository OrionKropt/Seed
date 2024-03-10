#pragma once

#include "vector2.h"
class CPosition
{
public:
	CPosition() : x(0), y(0) {}
	CPosition(const float& X, const float& Y) : x(X), y(X) {}
	CPosition(const vector2 vec) { x = vec.x; y = vec.y; }
	float x;
	float y;
};
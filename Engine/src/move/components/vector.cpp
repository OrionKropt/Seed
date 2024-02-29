#include "vector2.h"

vector2::vector2() : x(0), y(0) {}

vector2::vector2(const vector2& other)
{
	this->x = other.x;
	this->y = other.y;
}
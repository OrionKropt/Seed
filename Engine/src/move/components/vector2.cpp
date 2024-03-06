#include "vector2.h"

vector2::vector2() : x(0), y(0) {}

vector2::vector2(float x, float y) : x(x), y(y) {}


vector2::vector2(const vector2& other)
{
	this->x = other.x;
	this->y = other.y;
}

bool vector2::operator==(const vector2& other)
{
	return this->x == other.x && this->y == other.y;
}

vector2 vector2::operator+(const vector2& other)
{
	return vector2((this->x + other.x), (this->y + other.y));
}

vector2 vector2::operator-(const vector2& other)
{
	return vector2((this->x - other.x), (this->y - other.y));
}

void vector2::operator+=(const vector2& other)
{
	this->x += other.x;
	this->y += other.y;
}

void vector2::operator-=(const vector2& other)
{
	this->x -= other.x;
	this->y -= other.y;
}

#include "vector2.h"
#include <iostream>
vector2::vector2() : x(0), y(0) {}

vector2::vector2(float x, float y) : x(x), y(y) {}


vector2::vector2(const vector2& other)
{
	this->x = other.x;
	this->y = other.y;
}

auto vector2::Length() -> float const
{
	return sqrt((x*x) + (y*y));
}

auto vector2::Distance(vector2& other) -> float const 
{
	return (other - *this).Length();
}

auto vector2::ScalarProduct(const vector2& other) -> float const
{
	return ((this->x * other.x) + (this->y * other.y));
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

vector2 vector2::operator*(const float& scalar)
{
	return vector2(x * scalar, y * scalar);
}

vector2& vector2::operator*=(const float& scalar)
{
	x *= scalar;
	y *= scalar;
	return *this;
}

vector2& vector2::operator/=(const float& scalar)
{
	if (scalar != 0)
	{
		x /= scalar;
		y /= scalar;
	}
	else throw std::invalid_argument("Error vector2::operator/=: divide by zero!");
	return *this;
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

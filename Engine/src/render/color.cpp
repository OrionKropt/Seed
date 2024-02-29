#include "color.h"

Color::Color()
{
	r = 255;
	g = 0;
	b = 0;
	alfa = 255;
}

Color::Color(const Color& other)
{
	this->r = other.r;
	this->g = other.g;
	this->b = other.b;
	this->alfa = other.alfa;
}

#include "Color.h"



Color::Color()
{
	r = 255;
	g = 0;
	b = 0;
	alfa = 255;
}

const std::bitset<MAX_BITS> Color::signature(generate_signature());

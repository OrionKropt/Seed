#pragma once

#include "vector2.h"
#include "generate_signature.h"
class Position
{
public:
	Position();
	Position(const float& X, const float& Y);
	Position(const vector2 vec);
	float x;
	float y;
	static const std::bitset<MAX_BITS> signature;
};
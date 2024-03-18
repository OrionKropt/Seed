#pragma once


#include "vector2.h"
#include "generate_signature.h"

class Movement
{
public:
	Movement();
	vector2 Velocity;
	vector2 jamp_velocity;
	bool is_moving;
	bool is_jumping;
	bool on_ground;
	enum direction { RIGHT = 1, LEFT };
	direction dir;
	static const std::bitset<MAX_BITS> signature;
};




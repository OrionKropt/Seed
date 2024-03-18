
#include "Movement.h"


Movement::Movement() :
	Velocity(),
	jamp_velocity(),
	is_moving(false),
	is_jumping(false),
	on_ground(true),
	dir(RIGHT)
{}

const std::bitset<MAX_BITS> Movement::signature(generate_signature());
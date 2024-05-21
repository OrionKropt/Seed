
#include "transform.h"


Transform::Transform() :
	velocity(),
	jamp_velocity(),
	is_moving(false),
	is_jumping(false),
	on_ground(true),
	dir(RIGHT)
{}

const std::bitset<MAX_BITS> Transform::signature(generate_signature());
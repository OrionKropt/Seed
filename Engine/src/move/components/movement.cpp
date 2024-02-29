
#include "movement.h"


Movement::Movement() :
	moveSpeed(0),
	jampSpeed(5),
	IsMoving(false),
	IsJumping(false),
	OnGround(true),
	dir(RIGHT),
	vec()
{}
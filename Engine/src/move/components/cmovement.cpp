
#include "cmovement.h"


CMovement::CMovement() :
	Velocity(),
	jampVelocity(),
	IsMoving(false),
	IsJumping(false),
	OnGround(true),
	dir(RIGHT),
	Position()
{}
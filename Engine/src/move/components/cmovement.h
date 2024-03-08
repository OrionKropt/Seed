#pragma once


#include "vector2.h"


class CMovement
{
public:
	CMovement();
	vector2 Velocity;
	vector2 jampVelocity;
	vector2 Position;
	bool IsMoving;
	bool IsJumping;
	bool OnGround;
	enum direction { RIGHT = 1, LEFT };
	direction dir;
};




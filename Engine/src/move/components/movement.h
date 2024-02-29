#pragma once


#include "vector2.h"


class Movement
{
public:
	Movement();
	float moveSpeed;
	float jampSpeed;
	bool IsMoving;
	bool IsJumping;
	bool OnGround;
	enum direction { RIGHT = 1, LEFT };
	direction dir;
	vector2 vec;
};



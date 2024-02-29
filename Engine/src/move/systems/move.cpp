
#include "move.h"

void System::Move::MoveUpdate(const float& delta_time, Movement& object)
{
	if (object.IsMoving)
	{
		if (object.dir == object.RIGHT) 
			object.vec.x += object.moveSpeed;
		else object.vec.x -= object.moveSpeed;
	}
	if (object.IsJumping && object.OnGround) object.vec.y += object.jampSpeed;
	
	object.dir = object.RIGHT;
}

#pragma once

#include  "movement.h"
#include "color.h"
#include "game_object.h"



class Square : public GameObject, public Movement, public Color
{
public:
	Square();
	Square(const Square& other);
	
	
private:
	float length;
};

Square::Square() : length(0) {}


Square::Square(const Square& other)
{
	this->length = other.length;
	//this->vec = other.vec;
}





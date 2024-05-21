#pragma once

#include <unordered_map>
#include <bitset>

#include <entity.h>


#include "color.h"
#include "position.h"
#include "sprite.h"



class Component_manager
{
public:
	auto get_max_components() -> unsigned int const;
private:
	static const unsigned char MAX_COMPONENTS = MAX_BITS;
	std::unordered_map<Id, std::bitset<MAX_COMPONENTS>> _Components;

	std::unordered_map<Id, Color> color_components;
	std::unordered_map<Id, Position> position_components;
	
};
#pragma once

#include <iostream>
#include <cassert>
#include <vector>
#include <unordered_map>
#include <queue>
#include <bitset>

#include "generate_id.h"
#include "entity.h"

// стр 428, 1001



class EntityManager
{
public:
	auto create_entity() -> Entity;
	auto destroy_entity(Entity&) -> void;
	auto get_max_entites() -> Id;
	auto update() -> void;
	
private:
	const Id _MAX_ENTITIES = std::numeric_limits<Id>::max();
	Id _living_entity_count = 0;
	std::vector<Entity> _Entites;
	std::unordered_map<Id, unsigned int> _Index_entites;
	std::queue<Entity> _Vacant_id;
	std::vector<Entity> _Add_entity;   
	std::vector<Entity> _Destroyed_entity;

	
};
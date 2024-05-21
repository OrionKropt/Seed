#pragma once

#include <iostream>

#include <cassert>
#include <vector>
#include <unordered_map>
#include <queue>
#include "generate_signature.h"

#include "generate_id.h"
#include "entity.h"

// стр 428, 1001



class EntityManager
{
public:
	auto create_entity() -> Entity;
	auto destroy_entity(Entity&) -> void;
	auto get_max_living_entites() -> Id const;
	auto update() -> void;
	
private:
	const Id MAX_ENTITIES = std::numeric_limits<Id>::max();
	Id living_entity_count = 0;
	std::vector<Entity> living_entites;
	std::unordered_map<Id, size_t> index_living_entites;
	std::unordered_map < Id, std::bitset<MAX_BITS>> signatures;
	std::queue<Entity> vacant_id;
	std::vector<Entity> to_add_entity;   
	std::vector<Entity> destroyed_entity;

	
};
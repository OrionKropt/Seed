#pragma once

#include <iostream>
#include <cassert>
#include <vector>
#include <unordered_map>
#include <queue>
#include "generate_id.h"
#include "entity.h"

// стр 428, 1001

class EntityManager
{
public:
	auto CreateEntity() -> Entity;
	auto DestroyEntity(Entity&) -> void;
	auto GetMaxEntites() -> Id;
	
	std::vector<Entity> entites;
	std::unordered_map<Id, unsigned int> IndexEntites;
private:
	const Id _MAX_ENTITIES = std::numeric_limits<Id>::max();
	Id _LivingEntityCount = 0;
	std::queue<Id> DestroyedEntity;
	
};
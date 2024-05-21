#include "entity_manager.h"



auto EntityManager::create_entity() -> Entity 
{
	assert(living_entity_count < MAX_ENTITIES && "Too many entities in existence.");
	Entity entity;
	if (vacant_id.empty())
	{
		entity = Entity(GenerateID());
	}
	else
	{
		entity = Entity (vacant_id.back());
		vacant_id.pop();
	}
	to_add_entity.push_back(entity);
	return entity;
}

auto EntityManager::destroy_entity(Entity& entity) -> void
{
	destroyed_entity.push_back(entity);
}

auto EntityManager::get_max_living_entites() -> unsigned int const
{
	return MAX_ENTITIES;
}


// The entity value is mapped to a vector index to store entities evenly in memory
// When an entity is deleted, it is swapped with the last element of the vector and then erased.

auto EntityManager::update() -> void
{
	for (auto e : destroyed_entity)
	{
		size_t index = index_living_entites.at(e.get_id());
		Entity temp = living_entites.at(living_entity_count - 1);

		std::swap(living_entites[index], living_entites.at(living_entity_count - 1));

		index_living_entites.at(e.get_id()) = index_living_entites.at(temp.get_id());
		vacant_id.push(e.get_id());
		living_entites.pop_back();
		--living_entity_count;
	}
	if (!destroyed_entity.empty()) destroyed_entity.clear();

	for (auto e : to_add_entity)
	{
		assert(living_entity_count < MAX_ENTITIES && "Too many entities in existence.");

		++living_entity_count;
		living_entites.push_back(e);
		index_living_entites.insert_or_assign(e.get_id(), living_entity_count - 1);
		signatures.insert_or_assign(e.get_id(), 0);
	}
	if (!to_add_entity.empty()) to_add_entity.clear();
}

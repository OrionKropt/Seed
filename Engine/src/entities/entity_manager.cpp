#include "entity_manager.h"



auto EntityManager::CreateEntity() -> Entity
{
	assert(_LivingEntityCount < _MAX_ENTITIES && "Too many entities in existence.");
	Entity entity;
	if (DestroyedEntity.empty())
	{
		entity = Entity(GenerateID());
		++_LivingEntityCount;
	}
	else
	{
		entity = Entity (DestroyedEntity.back());
		DestroyedEntity.pop();
		++_LivingEntityCount;
	}
	entites.push_back(entity);
	IndexEntites.insert_or_assign(entity.GetId(), _LivingEntityCount - 1);
	return entity;
}

auto EntityManager::DestroyEntity(Entity& entity) -> void
{
	std::swap(entites.at(IndexEntites.at(entity.GetId())),
		entites.at(_LivingEntityCount - 1));
	IndexEntites.at(entity.GetId()) = IndexEntites.at(entites.at(IndexEntites.at(entity.GetId())).GetId());
	DestroyedEntity.push(entity.GetId());
	--_LivingEntityCount;
}

auto EntityManager::GetMaxEntites() -> unsigned int
{
	return _MAX_ENTITIES;
}

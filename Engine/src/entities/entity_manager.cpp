#include "entity_manager.h"



auto EntityManager::create_entity() -> Entity
{
	assert(_living_entity_count < _MAX_ENTITIES && "Too many entities in existence.");
	Entity entity;
	if (_Vacant_id.empty())
	{
		entity = Entity(GenerateID());
	}
	else
	{
		entity = Entity (_Vacant_id.back());
		_Vacant_id.pop();
	}
	_Add_entity.push_back(entity);
	return entity;
}

auto EntityManager::destroy_entity(Entity& entity) -> void
{
	_Destroyed_entity.push_back(entity);
}

auto EntityManager::get_max_entites() -> unsigned int
{
	return _MAX_ENTITIES;
}

auto EntityManager::update() -> void
{
	for (auto e : _Destroyed_entity)
	{
		std::swap(_Entites.at(_Index_entites.at(e.get_id())),
			_Entites.at(_living_entity_count - 1));
		_Index_entites.at(e.get_id()) = _Index_entites.at(_Entites.at(_Index_entites.at(e.get_id())).get_id());
		_Vacant_id.push(e.get_id());
		_Entites.pop_back();
		--_living_entity_count;
	}
	if (!_Destroyed_entity.empty()) _Destroyed_entity.clear();

	for (auto e : _Add_entity)
	{
		assert(_living_entity_count < _MAX_ENTITIES && "Too many entities in existence.");
		++_living_entity_count;
		_Entites.push_back(e);
		_Index_entites.insert_or_assign(e.get_id(), _living_entity_count - 1);
	}
	if (!_Add_entity.empty()) _Add_entity.clear();
}

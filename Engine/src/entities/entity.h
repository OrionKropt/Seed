#pragma once
#include <memory>

typedef unsigned int Id;

class Entity
{
public:
	Entity(const Id& Id) : id(Id) {}
	Entity() : id(-1) {}
	auto get_id() -> Id { return id; }
	Entity operator= (const Entity& other) { this->id = other.id; return *this; }
private:
	
	Id id;
};





#pragma once
#include "generate_id.h"

class GameObject
{
public:
	GameObject();
	auto GetID() -> unsigned int const;
private:
	const unsigned int id;
};

GameObject::GameObject() : id(GenerateID()) {}
auto GameObject::GetID() -> unsigned int const
{
	return id;
}

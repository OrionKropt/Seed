#pragma once
#include "generate_id.h"

#include<vector>

class GameObject
{
public:
	GameObject();
	auto GetID() -> unsigned int const;
	vector<GameObject*> vec;
private:
	const unsigned int id;
};

GameObject::GameObject() : id(GenerateID()) {}
auto GameObject::GetID() -> unsigned int const
{
	return id;
}

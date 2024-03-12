#pragma once
#include <memory>
#include "generate_id.h"


class GameObject
{
public:
	GameObject();
	auto GetID() -> unsigned int const;
	template<typename T>
	auto AddComponent(T) -> void;
	
private:
	//static std::unique_ptr<Componets> components;
	const unsigned int id;
};

//GameObject::GameObject() : id(GenerateID()) { components = std::make_unique<Componets>(); }
auto GameObject::GetID() -> unsigned int const
{
	return id;
}

template<typename T>
auto GameObject::AddComponent(T Component) -> void
{
	if constexpr
}

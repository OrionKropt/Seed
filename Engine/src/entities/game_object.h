#pragma once
#include <memory>
#include "generate_id.h"


class GameObject
{
public:
	GameObject();
	auto get_id() -> unsigned int const;
	template<typename T>
	auto add_component(T) -> void;
	
private:
	//static std::unique_ptr<Componets> components;
	const unsigned int id;
};

//GameObject::GameObject() : id(GenerateID()) { components = std::make_unique<Componets>(); }
auto GameObject::get_id() -> unsigned int const
{
	return id;
}

template<typename T>
auto GameObject::add_component(T Component) -> void
{
	if constexpr
}

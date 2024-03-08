#pragma once
#include <memory>
#include "generate_id.h"
#include "cmovement.h"
#include "cname.h"
#include "ccolor.h"

class GameObject
{
public:
	GameObject();
	auto GetID() -> unsigned int const;

	std::shared_ptr<CMovement> cMovement;
	std::shared_ptr<CName> cName;
	std::shared_ptr<Color> cColor;
private:
	const unsigned int id;
};

GameObject::GameObject() : id(GenerateID()) {}
auto GameObject::GetID() -> unsigned int const
{
	return id;
}

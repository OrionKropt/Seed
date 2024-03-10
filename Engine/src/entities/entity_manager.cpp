#include "entity_manager.h"

EntityManager::EntityManager()
{
	AvalibalEnities.SetSize(MAX_ENTITIES);
	for (unsigned int i = 0; i < MAX_ENTITIES; ++i)
		AvalibalEnities.push(GenerateID());

	


}

#include "pch.h"
#include "ActivityRepository.hpp"

Activity * ActivityRepository::findByOwner(Person * owner)
{
	for (unsigned int i = 0; i < mEntities.size(); i++)
		if (mEntities.at(i)->getOwner() == owner)
			return mEntities.at(i);
	return NULL;
}

Activity * ActivityRepository::findByLocation(Room * location)
{
	for (unsigned int i = 0; i < mEntities.size(); i++)
		if (mEntities.at(i)->getRoom() == location)
			return mEntities.at(i);
	return NULL;
}


Activity* ActivityRepository::findByDescription(std::string desc)
{
	for (unsigned int i = 0; i < mEntities.size(); i++)
		if (mEntities[i]->getDescription() == desc)
			return mEntities[i];

	return NULL;
}
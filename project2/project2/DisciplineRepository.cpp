#include "DisciplineRepository.hpp"

#Include "DisciplineRepository.hpp""

Discipline * DisciplineRepository::findBySubject(std::string subject)
{
	for (unsigned int i = 0; i < mEntities.size(); i++)
		if (mEntities.at(i)->getSubject() == subject)
			return mEntities.at(i);
	return NULL;
}


Discipline* DisciplineRepository::findByType(std::string type)
{
	for (unsigned int i = 0; i < mEntities.size(); i++)
		if (mEntities[i]->getType() == type)
			return mEntities[i];

	return NULL;
}
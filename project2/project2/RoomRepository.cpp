#include "pch.h"
#include "RoomRepository.hpp"

Room * RoomRepository::findByName(std::string name){

	for (unsigned int i = 0; i < mEntities.size(); i++)
		if (mEntities.at(i)->getName() == name)
			return mEntites.at(i);
	return NULL;
}

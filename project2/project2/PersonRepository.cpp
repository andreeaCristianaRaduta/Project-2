#include "pch.h"
#include "PersonRepository.hpp"

Person * PersonRepository::findByFullName(std::string firstName, std::string lastName){
	
	for (unsigned int i = 0; i < mEntities.size(); i++)
		if (mEntities.at(i)->getFirstName() = firstName && mEntities.at(i)->getLastName = lastName)
			return mEntities.at(i);
	return NULL;

}

Person * PersonRepository::findByCnp(std::string cnp){

	for (unsigned int i; i < mEntities.size(); i++)
		if (mEntities.at(i)->getCnp == cnp)
			return mEntities.at(i);
	return NULL;
}

Person * PersonRepository::findByEmail(std::string email){

	for (unsigned int i = 0; i < mEntities.size(); i++)
		if (mEntities.at(i)->getEmail == email)
			return mEntities.at(i);
	return NULL;
}

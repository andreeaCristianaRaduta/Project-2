#pragma once
#include "Person.hpp"
#include "Repository.hpp"

class PersonRepository:public Repository<Person>{

public:
	Person* findByFullName(std::string firstName, std::string lastName);
	Person* findByCnp(std::string cnp);
	Person* findByEmail(std::string email);
};

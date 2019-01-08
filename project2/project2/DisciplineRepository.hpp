#pragma once
#include "Discipline.hpp"
#include "Repository.hpp"

class DisciplineRepository :public Repository<Discipline> {
public:
	Discipline* findBySubject(std::string subject);
	Discipline* findByType(std::string type);
};
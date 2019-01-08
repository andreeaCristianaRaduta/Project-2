#pragma once
#include "Activity.hpp"
#include "Repository.hpp"
#include "Room.hpp"

class ActivityRepository :public Repository<Activity> {
public:
	Activity*findByOwner(Person* owner);
	Activity*findByLocation(Room* location);
	Activity* findByDescription(std::string);
};
#pragma once
#include "Person.hpp"
#include "Room.hpp"
#include <string>

class Activity {
	Room *mLocation;
	Person *mOwner;
	std::string mDescription;
public:
	Activity(Room *location, Person *owner, std::string description);
	Person* getOwner();
	Room* getRoom();
	std::string getDescription() const;

	friend std::istream& operator >> (std::istream& in, Activity& ob);
	friend std::ostream& operator << (std::ostream& out, const Activity& ob);
};
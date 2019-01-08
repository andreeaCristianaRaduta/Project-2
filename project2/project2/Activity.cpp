#include "pch.h"
#include "Activity.hpp"

Activity::Activity(Room * location, Person * owner, std::string description)
	:mLocation(location)
	,mOwner(owner)
	,mDescription(description)
{
}

Person * Activity::getOwner()
{
	return mOwner;
}

Room * Activity::getRoom()
{
	return mLocation;
}

std::string Activity::getDescription() const
{
	return mDescription;
}

std::istream& operator >> (std::istream& in, Activity& ob)

{

	in>> *dynamic_cast<Room*>(ob.mLocation);

	in>> *dynamic_cast<Person*>(ob.mOwner);

	in>> ob.mDescription;

	return in;

}

std::ostream& operator << (std::ostream& out, const Activity& ob)

{

	out<< ob.mDescription << " - ";

	out<< *dynamic_cast<Room*> (ob.mLocation);

	out<< *dynamic_cast<Person*> (ob.mOwner);

	return out;

}
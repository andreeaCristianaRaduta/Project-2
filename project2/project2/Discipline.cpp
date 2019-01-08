#include "Discipline.hpp"


Discipline::Discipline(std::string subject, std::string type, std::vector<Activity*> activities){

	mSubject = subject;
	mType = type;
	mActivities = activities;
}

void Discipline::setSubject(std::string subject){
	mSubject = subject;
}

std::string Discipline::getSubject(){
	return mSubject;
}

void Discipline::setType(std::string type){
	mType = type;
}


std::string Discipline::getType(){
	return mType;
}


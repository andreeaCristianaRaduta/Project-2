#pragma once
#include <string.h>
#include <vector>
#include "Activity.hpp"


class Discipline {
	std::string mName;
	std::vector<Activity*> mActivities;

public:
	void setSubject(std::string subject);
	std::string getSubject();
	void setType(std::string);
	std::string getType();
};
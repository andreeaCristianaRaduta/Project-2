#pragma once
#include "Role.hpp"
#include "StudyGroup.hpp"
class StudentRole :public Role {

	int mID;
	std::string mDomain;
	StudyGroup* mGroup;
public:
	StudentRole(int id, std::string domain, StudyGroup* group);

	void setID(int);
	int getID();
	void setDomain(std::string);
	std::string getDomain();
};
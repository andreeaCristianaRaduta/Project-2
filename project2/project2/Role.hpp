#pragma once
#include<string>

class Role {

public:
	enum RoleType {
		STUDENT_ROLE, //=0
		TEACHER_ROLE  //=1
	};

	Role(RoleType type);


protected:
	RoleType mType;
};
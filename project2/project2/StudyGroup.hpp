#pragma once
#include "Discipline.hpp"
#include<vector>
#include<string>

class StudyGroup
{
	int mGroup;
	std::vector<Discipline*> mDisciplines;
	std::vector<float> mGrades;

public:
	StudyGroup();
	StudyGroup(int Group, std::vector<Discipline*> Disciplines);

	void setGroup(int);
	int getGroup();

	std::vector<Discipline*> getDisciplines();
	std::vector<float> getGrades();
	void addGrade(float grade, std::string subject);
};


#include "pch.h"
#include <iostream>
#include "Person.hpp"
#include "Role.hpp"
#include "Activity.hpp"
#include "Room.hpp"
#include "TeacherRole.hpp"
#include "StudentRole.hpp"
#include "ActivityRepository.hpp"
#include "PersonRepository.hpp"
#include "RoomRepository.hpp"
#include "Person.cpp"
#include "Role.cpp"
#include "Activity.cpp"
#include "Room.cpp"
#include "TeacherRole.cpp"
#include "StudentRole.cpp"
#include "ActivityRepository.cpp"
#include "PersonRepository.cpp"
#include "RoomRepository.cpp"
#include "Repository.hpp"
#include "Discipline.hpp"
#include "DisciplineRepository.hpp"
#include "StudyGroup.hpp"

int main(){

	PersonRepository students;
	PersonRepository teachers;
	RoomRepository rooms;
	ActivityRepository activities;
	DisciplineRepository disciplines;

	teachers.add(new Person({ new TeacherRole() }, "2132456897754", "Dobrovat", "Anca", "dobrovata@gmail.com"));
	teachers.add(new Person({ new TeacherRole() }, "1234564324567", "Rapeanu", "Stefan", "rapeanus@gmail.com"));

	students.add(new Person({ new StudentRole() }, "2458743214567", "Istrate", "Madalina", "istratem@gmail.com"));
	students.add(new Person({ new StudentRole(10) }, "2458096432144", "Musat", "Alexandra", "musata@gmail.com"));

	rooms.add(new Room("Titeica"));
	rooms.add(new Room("Sala 10"));

	activities.add(new Activity(rooms.findByName("Titeica"), teachers.findByCNP("2132456897754"), "Curs"));
	activities.add(new Activity(rooms.findByName("Sala 10"), teachers.findByCNP("1234564324567"), "Laborator"));

	StudyGroup* studyGroup = new StudyGroup(254,
		{
			new Discipline("OOP", "Laboratory",
			{new Activity(rooms.findByName("Sala 10"), teachers.findByCNP("1234564324567"), "Laborator")})
		});


	students.add(new Person({ new StudentRole(1, "CTI", studyGroup) }, "2156875320098", "Neagu", "Oana", "neaguo@gmailcom"));
	disciplines.add(new Discipline("OOP", "Curs", { activities.findByLocation(rooms.findByName("Titeica")) }));
	disciplines.add(new Discipline("OOP", "Curs", { activities.findByLocation(rooms.findByName("Titeica")) }));


	students.add(new Person(
		{
			new StudentRole(2, "CTI",
			new StudyGroup(254, {disciplines.findByType("Curs")}))
		},
		"2990415420044", "Raduta", "Andreea", "radutaa@gmail.com"
	));

	std::cout << "STUDENTI:\n";
	students.print();
	std::cout << "PROFESORI:\n";
	teachers.print();
	std::cout << "SALI:\n";
	rooms.print();
	std::cout << "ACTIVITATI:\n";
	activities.print();
}


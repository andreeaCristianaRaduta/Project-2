#pragma once
#include <string>
#include <vector>
#include "Role.hpp"
class Person {
	std::string mCNP;
	std::string mFirstName;
	std::string mLastName;
	std::string mEmail;
	std::vector<Role*> mRoles;

public:
	Person() {};
	Person(std::vector<Role*> roles, std::string CNP, std::string FirstName, std::string LastName, std::string Email = "");

	void addRole(Role*);

	void setCnp(std::string CNP);
	std::string getCnp();

	void setFirstName(std::string FirstName);
	std::string getFirstName();

	void setLastName(std::string LastName);
	std::string getLastName();

	void setEmail(std::string Email);
	std::string getEmail();

	friend std::istream &operator>>(std::istream &stream, Person &object);
	friend std::ostream &operator<<(std::ostream &stream, Person &object);

	void addRole(Role *role);

};
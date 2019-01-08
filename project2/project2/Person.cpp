#include "pch.h"
#include "Person.hpp"

Person::Person(std::vector<Role*> roles, std::string CNP, std::string FirstName, std::string LastName, std::string Email)
	:mRoles(roles)
	,mCNP(CNP)
	, mFirstName(FirstName)
	, mLastName(LastName)
	, mEmail(Email) {}


void Person::addRole(Role *role)
{
	mRoles.push_back(role);
}

void Person::setCnp(std::string CNP)
{
	mCNP = CNP;
}

std::string Person::getCnp()
{
	return mCNP;
}

void Person::setFirstName(std::string FirstName)
{
	mFirstName = FirstName;
}

std::string Person::getFirstName()
{
	return mFirstName;
}

void Person::setLastName(std::string LastName)
{
	mLastName = LastName;
}

std::string Person::getLastName()
{
	return mLastName;
}

void Person::setEmail(std::string Email)
{
	mEmail = Email;
}

std::string Person::getEmail()
{
	return mEmail;
}

void Person::addRole(Role * role){
	mRoles.push_back(role);
}

std::istream & operator>>(std::istream & in, Person & object)
{
	in >> object.mCNP;
	in >> object.mFirstName;
	in >> object.mLastName;
	in >> object.mEmail;
	return in;
}

std::ostream & operator<<(std::ostream & out, Person & object)
{

	out << object.mCNP;
	out << object.mFirstName;
	out << object.mLastName;
	out << object.mEmail;
	return out;
}
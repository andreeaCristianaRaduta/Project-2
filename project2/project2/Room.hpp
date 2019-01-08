#pragma once
#include <string>

class Room {
	std::string mName;
public:
	Room(std::string name);
	void setName(std::string name);
	std::string getName();

	friend std::istream& operator>> (std::istream& in, Room& ob);
	friend std::ostream& operator<< (std::ostream& sout, const Room& ob);
};
#include "pch.h"
#include "Room.hpp"

Room::Room(std::string name)
	:mName(name)
{
}

void Room::setName(std::string name){
	mName = name;
}

std::string Room::getName(){
	return mName;
}


std::istream& operator>> (std::istream& in, Room& ob){

	in >> ob.mName;
	return in;
}



std::ostream& operator<< (std::ostream& outt, const Room& ob){

	out << ob.mName << '\n';
	return out;
}
#pragma once
#include "Repository.hpp"
#include "Room.hpp"

class RoomRepository :public Repository<Room> {

public:
	Room* findByName(std::string name);
};
#pragma once
#include "character.h"

using namespace std;

class player : public character{
public:
	player(string cname, string cdescription) : character(cname, cdescription) {};
	void fight(character *other);
	bool isAlive();
	void setStats(int level);
};




#pragma once

#include <string>
#include <iostream>
#include <stdlib.h>

using namespace std;

class player
{
public:
	player();
	player(string inputName);
	
	string name;
	void Greet();
};



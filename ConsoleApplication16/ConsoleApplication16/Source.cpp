#include "header.h"

player::player()
{
	name = " Default";
}
player::player(string inputName)
{
	name = inputName;
}
void player::Greet()
{
	cout << " Beautiful" << name << endl;
		
}

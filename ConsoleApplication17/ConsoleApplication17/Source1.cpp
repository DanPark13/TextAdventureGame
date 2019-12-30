#include "character.h"

using namespace std;

character::character() :character::character("Default name", "Default description") {};
character::character( string cname, string cdescription)
{
	name = cname;
	description = cdescription;
}

void character::describe()
{
	cout << name << "" << description << endl;
}
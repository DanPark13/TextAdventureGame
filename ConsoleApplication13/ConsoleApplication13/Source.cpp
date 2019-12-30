#include <iostream>
#include <string>

using namespace std;

string howMuchFun(string amount);

string howMuchFun(string amount)
{
	return amount + " fun";
}

int main()
{
	cout << " I'm having" << howMuchFun(" ton's of") << endl;
}
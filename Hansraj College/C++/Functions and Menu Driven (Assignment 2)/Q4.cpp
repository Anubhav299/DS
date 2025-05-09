#include <iostream>
using namespace std;
string leapornot(int);
int main()
{
	int y;
	string leap="";
	cout << "Enter Year: ";
	cin>>y;
	leap=leapornot(y);
	cout<<y<<leap;
	return 0;
}

string leapornot(int y)
{
	if( y % 400 == 0 || (y % 4 == 0 && y % 100 != 0))
	return " is a leap year.";
	else
	return " is not a leap year.";
}


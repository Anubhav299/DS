#include<iostream>
using namespace std;
int main()
{
int age[4];
for(int j=0; j<4; j++) //get 4 ages
{
cout << "Enter an age: ";
cin >> age[j]; //access array element
}
for(int j=0; j<4; j++) //display 4 ages
cout << "You entered " << age[j] << endl;
return 0;
}


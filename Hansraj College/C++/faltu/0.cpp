#include <iostream>
using namespace std;
float lbstokg(float); //declaration
int main()
{
float weight[5];
float lbs, kgs;
for(int i=1;i<=5;i++)
{
cout << "\nEnter your weight in pounds: ";
cin >> lbs;
weight[i-1] = lbstokg(lbs);
}
for(int j=0;j<=5;j++)
{
cout << "Your weight in kilograms is " << weight[j] << endl;
}
return 0;
}
float lbstokg(float pounds)
{
float kilograms = 0.453592 * pounds;
return kilograms;
}


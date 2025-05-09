#include <iostream>
using namespace std;
int main()
{
	int a,b,c,max;
	cout<<"Enter 3 numbers.";
	cin>>a;
	cin>>b;
	cin>>c;
	max = ((a>b&&a>c)?a:(b>c)?b:c);
	cout<<"Largest is : " << max;
}

#include <iostream>
using namespace std;

int gcd(int,int);
int main()
{
	int a,b;
	cout<<"Enter Number : "<<endl;
	cin>>a;
	cin>>b;
	cout<<"Answer : " << gcd(a,b);
	return 0;
}
int gcd(int a,int b)
{
	if(a==0)
		return b;
	if(b==0)
		return a;
	if(a==b)
		return a;
	if(a>b)
		return gcd(a-b,b);
	return gcd(a,b-a);
}

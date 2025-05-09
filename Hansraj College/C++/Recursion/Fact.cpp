#include <iostream>
using namespace std;

int fact(int);
int main()
{
	int n;
	cout<<"Enter Number : ";
	cin>>n;
	cout<<"Answer : " << fact(n);
	return 0;
}

int fact(int n) 
{
	if(n==1)
	{
		return 1;
	}
	else
	return n * fact(n-1);
}


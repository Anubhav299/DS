//Input a number and print its factorial.
#include <iostream>
using namespace std;
void facto(int,long long&);
int main()
{
	int n;
	long long f=1;
	cout << "Enter the Number : ";
	cin>>n;
	if (n==0)
	{
		cout<<"Factorial : 1 ";
	}
	else if (n<0)
	{
		cout<<"Can't Calculate Factorial of the Entered Number.";
	}
	else
	{
		facto(n,f);
		cout<<"Factorial : "<<f;
	}
  	return 0;
}

void facto(int n,long long&f)
{
	for(int i=1;i<=n;i++)
	{
		f=f*i;
	}
}

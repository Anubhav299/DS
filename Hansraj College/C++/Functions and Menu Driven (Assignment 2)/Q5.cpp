#include <iostream>
using namespace std;
long facto(int);
long f=1;
int main()
{
	int n;
	long fac=1;
	cout << "Enter Number: ";
	cin>>n;
	fac=facto(n);
	cout <<"Factorial of "<< n <<" is "<<fac<<endl;

	return 0;
}
	long facto(int n)
{
	for(int i=1;i<=n;i++)
	{
		f=f*i;
	}
	return f;
}


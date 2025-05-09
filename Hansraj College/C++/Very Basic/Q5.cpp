#include <iostream>
using namespace std;

int main()
{
	int n;
	long long f;
	cout << "Enter Number: ";
	cin>>n;
	f=1;
	for(int i=1;i<=n;i++)
	{
		f=f*i;
	}
	cout <<"Factorial of "<< n <<" is "<<f<<endl;
	return 0;
}


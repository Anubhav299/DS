#include <iostream>
using namespace std;

int main()
{
	//int* ptr = fun();
	int n;
	cout<<"Enter Number: ";
	cin>>n;
	int a[n];
	for(int i =0;i<n;i++)
	{
		cout<<"Enter Element" << i+1 <<" : ";
		cin>>a[i];
	}
	return 0;
}


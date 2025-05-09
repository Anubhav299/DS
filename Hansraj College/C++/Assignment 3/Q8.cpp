//Code a default function to calculate the factors of a number passed to the function. 
//If no value is passed, calculate factorial for 5. 
#include <iostream>
using namespace std;

void facto(int a=5);

int main()
{
	int n;
	cout<<"Enter Number : ";
    cin>>n;
    facto(n);
    facto();
    return 0;
}

void facto(int n)
{
    long f=1;
	for(int i=1;i<=n;i++)
	{
		f=f*i;
	}
	cout <<"Factorial of "<< n <<" is "<<f<<endl;
}


//Input a number and check if it is a prime number.
#include <iostream>
using namespace std;
void primeornot(int,char&);
int main()
{
	int n;
	char s='T';
	cout << "Enter Number: ";
	cin >> n;
	primeornot(n,s);
	if (s == 'T')
	cout<< n << " is a Prime Number";
	else
	cout<< n <<  " is a Composite Number";
  	return 0;
}

void primeornot(int n,char&ss)
{	
	int i=2;
	if (n<=1)
	cout << "Neither Prime nor Composite.";
	else
	{
		while ((i<= n/2) && (ss=='T'))
		{
			if (n%i==0)
			{
				ss='F';
			}
			i = i+1;
 		}
	}
}

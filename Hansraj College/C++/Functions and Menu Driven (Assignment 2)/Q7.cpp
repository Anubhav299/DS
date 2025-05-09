#include <iostream>
using namespace std;
void primeornot(int);
int main()
{
	int n;
	cout << "Enter Number: ";
	cin >> n;
	primeornot(n);
  	return 0;
}

void primeornot(int n)
{	
	int flag=0, i=2;
	if (n<=1)
	cout << "Neither Prime nor Composite.";
	else
	{
		while ((i<= n/2) && (flag == 0))
		{
			if (n%i==0)
			{
				flag = 1;
			}
			i = i+1;
 		}
 	if (flag == 0)
	cout<< n << " is a Prime Number";
	else if (flag>0)
	cout<< n <<  " is a Composite Number";
	}
}

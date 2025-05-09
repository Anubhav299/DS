#include <iostream>
using namespace std;

int main()
{
	int n, i=2, flag=0;
	cout << "Enter Number: ";
	cin >> n;
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
	cout<< n <<  " is a Composite Number";}
  	return 0;
}


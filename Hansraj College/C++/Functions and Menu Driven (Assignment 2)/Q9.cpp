#include <iostream>
using namespace std;
void factors(int);
int main() 
{
	int n;
	cout << " Enter Number: ";
	cin>>n;
	factors(n);
	return 0;
}

void factors(int n)
{
	cout << "The factors of " << n << " are : ";
	for(int i=1; i <= n; i++) 
	{
	if (n % i == 0)
 	  	cout << i << " ";
	}
}


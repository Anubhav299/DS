#include <iostream>
using namespace std;
void fibo(int);
int main()
{
	int n;
  	cout << "Enter the number of terms: ";
  	cin >> n;
  	cout << "Fibonacci Series is: " << endl;
  	fibo(n);
  	return 0;
}

void fibo(int n)
{	
	int i, a=0, b=1, c;
  	for (i=1; i<=n; i++)
  	{
    cout << a << "  ";
    c=a+b;
    a=b;
    b=c;
  	}
}


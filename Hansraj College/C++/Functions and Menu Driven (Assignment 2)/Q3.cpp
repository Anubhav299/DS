#include <iostream>
using namespace std;
void table(int);
int main()
{
	int n;
	cout << "Enter Number: " ;
	cin>>n;
	cout<<"The Multiplication Table of "<<n<<" is: "<<endl;
	table(n);
	return 0;
}

void table(int n)
{
	for(int i=1;i<=10;i++)
	{
  		cout <<n<<" * "<<i<<" = "<<n*i<<endl;
	}
}


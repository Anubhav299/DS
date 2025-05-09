#include<iostream>
using namespace std;
int sumofd(int);
int main()
{
	int n;
	cin>>n;
	cout<<"No. of digits - "<<sumofd(n);
}
int sumofd(int n)
{
	if(n==0)
		return 0;
	return 1 + sumofd(n/10);
}


#include <iostream>
using namespace std;
int calsumofd(int);
int main() 
{
	int n,s=0;
	cout << "Enter Number: ";
	cin>>n;
	s=calsumofd(n);
	cout<<"Sum of the digits is: "<<s<<endl;
	return 0;
}
	
int calsumofd(int num)
{
	int r,sumofd=0;
	while(num!=0)   
	{    
		r=num%10;
		sumofd=sumofd+r;
		num=num/10;
	}
	return sumofd;
}


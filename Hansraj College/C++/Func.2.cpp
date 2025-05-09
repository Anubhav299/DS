#include <iostream>
using namespace std;
void calsumofd(int);
int main() 
{
	int num;
	cout << "Enter Number: ";
	cin>>num;
	calsumofd(num);
	return 0;
}
	
void calsumofd(int n)
{
	int r,sumofd=0;
	while(n!=0)   
	{    
		r=n%10;
		sumofd=sumofd+r;
		n=n/10;
	}
	cout<<"Sum of the digits is: "<<sumofd<<endl;
}
	

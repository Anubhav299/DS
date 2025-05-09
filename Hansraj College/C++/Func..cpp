#include <iostream>
using namespace std;
void calsumofd();
int main() 
{
	cout<<"";
	calsumofd();
	return 0;
}
	
void calsumofd()
{
	int n,r,sumofd=0;
	cout << "Enter Number: ";
	cin>>n;
	while(n!=0)   
	{    
		r=n%10;
		sumofd=sumofd+r;
		n=n/10;
	}
	cout<<"Sum of the digits is: "<<sumofd<<endl;
}
	

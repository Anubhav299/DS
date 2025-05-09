#include <iostream>
using namespace std;
void multifunc(int);
int main() 
{
	int n;
	cout << "Enter Number: ";
	cin>>n;
	multifunc(n);
	return 0; 
}
	
void multifunc(int n)
{
	int r,rev,temp,sumofd=0;
	temp=n;
	while(n!=0)   
	{    
		r=n%10;
		rev=(rev*10)+r;
		sumofd+=r;
		n=n/10;
	}
	cout<<"Sum of the digits is: "<<sumofd<<endl;
	cout<<"Reverse of the number is: "<<rev<<endl;
	if(temp==rev)
		cout<<"Palindrome Number";
	else
		cout<<"Not a Palindrome Number";
}


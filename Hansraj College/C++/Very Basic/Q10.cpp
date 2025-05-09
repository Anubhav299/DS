#include <iostream>
using namespace std;

int main() 
{
	int n,r,rev,temp,sumofd=0;
	cout << "Enter Number: ";
	cin>>n;
	temp=n;
	while(n!=0)   
	{    
		r=n%10;
		rev=(rev*10)+r;
		sumofd=sumofd+r;
		n=n/10;
	}
	cout<<"Sum of the digits is: "<<sumofd<<endl;
	cout<<"Reverse of the number is: "<<rev<<endl;
	if(temp==rev)
		cout<<"Palindrome Number";
	else
		cout<<"Not a Palindrome Number";
	return 0;  
}


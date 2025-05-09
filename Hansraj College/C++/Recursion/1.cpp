// C++ program to reverse digits of a number
#include <bits/stdc++.h>
using namespace std;
int reverse(int);
// Driver Code
int main()
{
	int num,rev;
	cout<<"Enter Number : ";
	cin>>num;
	cout << "Reverse of the number : " << reverse(num);
	return 0;
}

int reverse(int num) 
{
   	if(num>0)
   	{
    	rev = rev*10 + (num%10);
    	reverse(num/10);
   	} 
    return rev;
}


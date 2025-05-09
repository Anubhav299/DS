#include <iostream>
using namespace std;
int largest(int,int,int);
int main()
{
	int n1,n2,n3,b=0;
	cout << "Enter 3 Numbers" << endl;
	cin>>n1>>n2>>n3;
	b = largest(n1,n2,n3);
	cout<<"Largest Number : "<<b<<endl;
	return 0;
}
int largest(int n1,int n2,int n3)
{
    if(n1 >= n2 && n1 >= n3)
    return n1;
    else if(n2 > n3)
    return n2;
    else
    return n3;  
}


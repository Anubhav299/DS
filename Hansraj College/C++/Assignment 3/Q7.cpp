//Code an inline function for a) area of a circle, b) area of a rectangle
#include <iostream>
using namespace std;

inline void area(int r)
{
    cout<<"Area of Circle is : "<<3.14*r*r<<endl;
}
inline void area(int l,int b)
{
	cout<<"Area of Rectangle is : "<<l*b<<endl;
}
int main()
{
	int r,l,b;
	cout<<"Enter the radius : ";
	cin>>r;
    area(r);
    cout<<"\nEnter length and breadth."<<endl;
	cin>>l>>b;
	area(l,b);
    return 0;
}


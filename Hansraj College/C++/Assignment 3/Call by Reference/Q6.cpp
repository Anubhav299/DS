//Function overloading for a) area of circle, b) square, c) rectangle, d) triangle 
#include <iostream>
#include <math.h>
using namespace std;

void area(int);
void area(double);
void area(int,int);
void area(int,int,int);

int main()
{
	int s,s1,s2,s3,l,b;
	double r;
	cout<<"Enter Side of Square."<<endl;
	cin>>s;
	area(s);
	cout<<"\nEnter length and breadth of rectangle."<<endl;
	cin>>l>>b;
	area(l,b);
	cout<<"\nEnter the radius of circle."<<endl;
	cin>>r;
	area(r);
	cout<<"\nEnter the three sides of the triangle."<<endl;
	cin>>s1>>s2>>s3;
	area(s1,s2,s3);
	return 0;
}

void area(int s)
{
    cout<<"Area of Square is : "<<s*s<<endl;
}

void area(double r)
{
	cout<<"Area of Circle is : "<<3.14*r*r<<endl;
}

void area(int l, int b)
{
    cout<<"Area of Rectangle is : "<<l*b<<endl;
}

void area(int s1,int s2,int s3)
{
	if (s1 <= 0 || s2 <= 0 || s3 <= 0 ||(s1 + s2 <= s3) || s1 + s3 <= s2 ||s2 + s3 <= s1)
    {
        cout << "Not a Valid Triangle.";
    }
    else
    {
    	float ss = (s1+s2+s3)/2;
		float a = sqrt(ss * (ss-s1) * (ss-s2) * (ss-s3));
		cout<<"Area of Triangle is : "<< a <<endl;
	}
	
}


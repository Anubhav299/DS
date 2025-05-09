#include <iostream>
using namespace std;

int main()
{
	int a,b,c;
	cout<<"Enter Numbers."<<endl;
	cin>>a>>b>>c;
	if(a>=b && a>= c)
	cout<<"Greatest is : "<<a;
	else if(b>=c)
	cout<<"Greatest is : "<<b;
	else
	cout<<"Greatest is : "<<c;
	return 0;
}

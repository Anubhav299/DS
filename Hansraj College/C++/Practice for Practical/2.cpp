#include <iostream>
#include <string.h>
using namespace std;
const int l = 7;
char reverse(char []);

int main()
{
	char s[l];
	cout<<"Enter - ";
	cin>>s;
	reverse(s);
}

char reverse(char s[])
{
	char rev[l];
	for(int i=0;i<l;i++)
	{
		rev[i]=s[l-i-1];
	}
	for(int i=0;i<l;i++)
	{
		cout<<rev[i];
	}
}

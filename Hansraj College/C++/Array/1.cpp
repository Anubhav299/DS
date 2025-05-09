#include <iostream>
using namespace std;
int const SIZE=5;
int greatest(int [],int&);

int main()
{	
	int c=0;
	int ht[SIZE];
	for(int i=0;i<SIZE;i++)
	{
	cout<<"Enter Height :";
	cin>>ht[i];
	}
	cout<<"Greatest Height is : "<< greatest(ht,c)<<endl;
	cout<<"Of Student " << c <<endl;
	return 0;
}

int greatest(int ht[],int&cc)
{
	int max = 0;
	for(int i=0;i<SIZE;i++)
	{
	if(ht[i]>max)
	{
		max=ht[i];
		cc=i+1;
	}
	}	
	return max;
}


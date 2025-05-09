#include <iostream>
using namespace std;

int* arry(int ,int);

int main()
{
	int r1,c1;
	cout<<"Enter Number of Rows - ";
	cin>>r1;
	cout<<"Enter Number of Columns - ";
	cin>>c1;
	
	int* ary[r1][c1] = arry(r1,c1);
	
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c1;j++)
		{
			cout<<ary[i][j]+" ";
		}
	cout<<endl;
	}
}

int* arry(int ar[][],int r,int c)
{
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			ar[i][j]=0;
		}
	}
	return ar;
}

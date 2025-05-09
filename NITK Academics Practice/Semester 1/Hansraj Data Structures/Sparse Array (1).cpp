#include <iostream>
using namespace std;

void enter_mat(int,int);
void sparse(int,int,int);

int main()
{
	int r,c;
	for(int z=0;z<2;z++)
	{
		int x=1;
		cout<<"Matrix "<<z+1<<endl;
		cout<<"Enter Number of Rows - ";
		cin>>r;
		cout<<"Enter Number of Columns - ";
		cin>>c;
		int ar[r][c];
		for(int i=0;i<r;i++)
		{
			for(int j=0;j<c;j++)
			{
				ar[i][j]=0;
			}
		}

		while(x!=0)
		{
			cout<<"Enter Choice."<<endl;
			cout<<"Enter 0 to exit."<<endl;
			cout<<"Enter any other number to continue."<<endl;
			cin>>x;
			switch(x)
			{
				case 0: break;
				
				default: 
						int i=0,j=0,n;
						cout<<"Enter Row Number - ";
						cin>>i;
						if(i>r)
						{
						while(i>r)
						{
							cout<<"Enter Valid Row."<<endl;
						 	cout<<"Enter Row Number - ";
						 	cin>>i;
						}
					 	}
						cout<<"Enter Column Number - ";
						cin>>j;
						if(j>c)
						{
							while(j>c)
							{
								cout<<"Enter Valid Column."<<endl;
								cout<<"Enter Column Number - ";
								cin>>j;	
							}
						}
						cout<<"Enter Element - ";
						cin>>n;
						ar[i-1][j-1]=n;
						break;
			}	
		}
		cout<<endl;
		for(int i=0;i<r;i++)
		{
			for(int j=0;j<c;j++)
			{
				cout<<ar[i][j]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
	cout<<"R  C  V"<<endl;	

		for(int i=0;i<r;i++)
		{
			for(int j=0;j<c;j++)
			{
				if(ar[i][j]!=0)
				{
					sparse(i+1,j+1,ar[i][j]);
				}
			}
			cout<<endl;
		}
		cout<<endl;
	}
	
	return 0;
}

void enter_mat(int n,int m)
{
	
}
void sparse(int p,int q,int r)
{
	cout<<p<<"  "<<q<<"  "<<r;
}


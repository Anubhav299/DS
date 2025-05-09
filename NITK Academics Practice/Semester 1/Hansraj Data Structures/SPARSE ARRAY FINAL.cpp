#include <iostream>
using namespace std;

 int r, c;

void enter_mat(int m,int n,int ar[m][n]);
void sparse(int r,int c,int a[r][c]);
int sparse_check(int r,int c,int a[r][c]);
int sparse_arr(int a[r][c],int s1[(r*c)/2][3]);

int main()
{
	int r,c,q=0,w=0;
	cout<<"Enter Number of Rows for both matrices- ";
	cin>>r;
	cout<<"Enter Number of Columns for both matrices - ";
	cin>>c;
	int s1[r][c],s2[r][c];
	cout<<"Enter Matrix 1 :"<<endl;
	enter_mat(r,c,s1);
	cout<<endl<<"Matrix 1"<<endl;
	display_mat(r,c,s1);	
    q = check_sparse(r,c,s1);

    cout<<"Enter Matrix 2 :"<<endl;
    make_matrix(r,c,s2);
    cout<<endl<<"Matrix 2"<<endl;
    dis_matrix(r,c,s2);
    w = check_sparse(r,c,s2);

	if(q==1 && w==1)
	{
		int z = (r*c)/2;
        int s1[z][c],s2[z][c],n1 = 0,n2 = 0;
        cout<<"*****************"<<endl;
        cout<<"Addition is possible !!!"<<endl;
        n1 = sparse_arr(a,s1);
        n2 = sparse_arr(b,s2);
        cout<<"Sparse Array 1 "<<endl;
        for(int i = 0;i<n1;i++)
        {
            for(int j = 0;j<c;j++)
            {
                cout<<s1[i][j]<<" ";
            }
            cout<<endl;
        }

        cout<<"Sparse Array 2 "<<endl;
        for(int i = 0;i<n2;i++)
        {
            for(int j = 0;j<c;j++)
            {
                cout<<s2[i][j]<<" ";
            }
            cout<<endl;
        }

        int p = n1+n2, g = 0,r = 0;
        int s[p][3] = {{0},{0}}; 
        for(int i= 0;i<n1;i++)
        {
            r = g;
            for(int j = 0;j<n2;j++)
            {
                if((s1[i][0] == s2[j][0]) and (s1[i][1] == s2[j][1]) and (s2[j][2] != 0))
                {
                    s[g][0] = s1[i][0];
                    s[g][1] = s1[i][1];
                    s[g][2] = s1[i][2] + s2[j][2];
                    g++;
                    s2[j][2] = 0;
                    break;
                }
                
            }
            if(r == g)
            {
                s[g][0] = s1[i][0];
                s[g][1] = s1[i][1];
                s[g][2] = s1[i][2];
                g++;
            }
        }

        for (int i = 0;i<n2;i++)
        {
            if(s2[i][2] != 0)
            {
                s[g][0]= s2[i][0];
                s[g][1] = s2[i][1];
                s[g][2] = s2[i][2];
                g++;
            }
        }


        ///////// PRINTING THE ADDITION OF SPARSE MATRICES //////////
        cout<<"Total Values "<<g<<endl;
        cout<<"Addition of Sparse result "<<endl;
        for(int w = 0;w<g;w++)
        {
            for(int y = 0;y<3;y++)
            {
                cout<<s[w][y]<<" ";
            }
            cout<<endl;
        }
    }	
	}
	else if(q==0) 
	{
		cout<<"Matrix 1 is not sparse."
	}
	else
	{
		cout<<"Matrix 2 is not sparse."
	}
}

void enter_mat(int m,int n,int ar[m][n])
{
	int x=1;
	cout<<"Matrix "<<z+1<<endl;
	cout<<"Enter Number of Rows - ";
	cin>>r;
	cout<<"Enter Number of Columns - ";
	cin>>c;
	int ar[m][n];
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
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
}

void display_mat(int r,int c,int a[r][c])
{
	for(int i=0;i<r;i++)
		{
			for(int j=0;j<c;j++)
			{
				cout<<a[i][j]<<" ";
			}
			cout<<endl;
		}	
}

int sparse_check(int r,int c,int a[r][c])
{
    int h = r*c;
    int k = 0;
    for(int i =0;i<r;i++)
    {
        for(int j = 0;j<c;j++)
        {
            if(a[i][j] == 0)
            {
                k++;
            }
        }
    }
    if(k>(h/2))
    {
        return 1;
    }
    return 0;
}

int sparse_arr(int a[r][c],int s1[(r*c)/2][3])
{
    int z = 0;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(a[i][j] != 0)
            {
                s1[x][0] = i;
                s1[x][1] = j;
                s1[x][2] = a[i][j];
                x++;
            }
        }
    } 
    return z;
}

int ;

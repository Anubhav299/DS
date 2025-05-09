///////////////////// ADDITION OF TWO SPARSE MATRICES (ARRAY) //////////////////////////

#include<iostream>
using namespace std;
const int r = 3;
const int c = 3;
void make_matrix(int a[r][c],int r,int c);
void dis_matrix(int a[r][c],int r,int c);
int check_sparse(int a[r][c],int r,int c);
int sparse_arr(int a[r][c],int s1[(r*c)/2][3]);



int main()
{
    cout<<"Enter the matrix A :"<<endl;
    int a[r][c],b[r][c],w = 0,q = 0;
    make_matrix(a,r,c);
    cout<<endl<<"Matrix A"<<endl;
    dis_matrix(a,r,c);
    w = check_sparse(a,r,c);


    cout<<"Enter the matrix B :"<<endl;
    make_matrix(b,r,c);
    cout<<endl<<"Matrix B"<<endl;
    dis_matrix(b,r,c);
    q = check_sparse(b,r,c);


    if((w==1) and (q ==1))
    {
        int y = (r*c)/2;
        int s1[y][3],s2[y][3],n1 = 0,n2 = 0;
        cout<<"*****************"<<endl;
        cout<<endl<<"Addition is possible"<<endl;
        n1 = sparse_arr(a,s1);
        n2 = sparse_arr(b,s2);
        cout<<"Sparse Array 1 "<<endl;
        for(int i = 0;i<n1;i++)
        {
            for(int j = 0;j<3;j++)
            {
                cout<<s1[i][j]<<" ";
            }
            cout<<endl;
        }

        cout<<"Sparse Array 2 "<<endl;
        for(int i = 0;i<n2;i++)
        {
            for(int j = 0;j<3;j++)
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
    else
    {
        cout<<"Either of the two matrices is not sparse so addition is not possible";
    }
    return 0;
}






void make_matrix(int a[r][c],int r,int c)
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>a[i][j];
        }
    }
}

void dis_matrix(int a[r][c],int r,int c)
{
    for(int i = 0;i<r;i++)
    {
        for(int j = 0;j<c;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}


int check_sparse(int a[r][c],int r,int c)
{
    int p = r*c;
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
    if(k>(p/2))
    {
        return 1;
    }
    return 0;
}

int sparse_arr(int a[r][c],int s1[(r*c)/2][3])
{
    int x = 0;
    for(int i = 0;i<r;i++)
    {
        for(int j = 0;j<c;j++)
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
    return x;
};

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string arr[n],temp;
        int i,j,x;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(i=n-1;i>=0;i--)
        {
            temp=arr[i];
            for(int j=0;j<4;j++)
            {
                if(temp[j]=='#')
                {
                    cout<<j+1<<" ";
                }
            }            
        }
        cout<<endl;
    }
}
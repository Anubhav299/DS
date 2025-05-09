#include <bits/stdc++.h>
using namespace std;

float distance(int x1,int y1,int x2,int y2)
{
    return sqrt(pow((x1-x2),2)+pow((y1-y2),2));
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c=0;
        cin>>n;
        int arr[n][2];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i][0];
            cin>>arr[i][1];
        }
        for(int i=0;i<n;i++)
        {
            int k;
            for(int j=0;j<2;j++)
            {
                float x,y,z;
                x=distance(arr[i][j],arr[i][j+k],arr[i+][j],arr[i+1][j+1]);
                y=distance(arr[i][j],arr[i][j+k],arr[i+1][j],arr[i+1][j+1]);
                z=
                if(pow(x,2))
            }
        }
    }

}
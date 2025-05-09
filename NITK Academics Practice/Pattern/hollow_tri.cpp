#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter Value of n : ";
    cin>>n;
    int spaces;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

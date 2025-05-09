#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,mn=0,steps=0;
        cin >> n;
        int arr[n][n];
        for (int i = 0; i < n;i++)
        {
            for (int j = 0; j < n;j++)
            {
                cin >> arr[i][j];
            }
            cout << endl;
        }

        for (int k = 0; k < n; k++)
        {
            for (int i = 0,j = 0; i < n, j < n; i++,j++)
            {
                if(arr[i][j]<0)
                {
                    mn = min(arr[i][j], mn);
                }
            }
        }
            steps += min;
        // for()

    }

    return 0;
}
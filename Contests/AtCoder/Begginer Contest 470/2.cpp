#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    long long arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    long long ans = 1;
//    double check = 0.0;
    for (int i = 0; i < n; i++)
    {
        if(log10(arr[i]) > k)
        {
            ans = 1;
        }
        else
        {
            ans = ans * (arr[i]);
        }
        // check += log10(arr[i]);
        // if(check >= k)
        // {
        //     ans = 1;
        //     check = 0.0;
        // }
        // else
        // {
        //     ans = ans * arr[i];
        // }
    }
    cout<< ans;
}
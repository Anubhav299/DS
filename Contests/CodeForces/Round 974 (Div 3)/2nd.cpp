#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,k;
        long long int x = 0;
        cin >> n >> k;
        while (k--)
        {
            x += pow(n, n);
            n--;
        }
        if (x % 2 == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        // cout << x;
    }

    return 0;
}

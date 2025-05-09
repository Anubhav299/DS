#include <bits/stdc++.h>
using namespace std;

int main()
{
    int  t;
    cin >> t;
    while (t--)
    {
        int n, k;
        vector<int> arr;
        int x, i = 0, temp = 0, c = 0;
        cin >> n >> k;
        for (i = 0; i < n; i++)
        {
            cin >> x;
            arr.push_back(x);
        }

        for (int i = 0; i < n; i++)
        {
            if (arr[i] >= k)
            {
                temp += arr[i];
                // arr[i] = 0;
            }
            if (arr[i] == 0)
            {
                if (temp > 0)
                {
                    temp--;
                    c++;
                }
            }
        }

        cout << c << endl;
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, count = 0;
    vector<int> arr = {1,3,4,2,2};
    n = arr.size();
    for (int i = 1; i <= (n-1); i++)
    {
        count = 0;
        for (int j = 0; j < n; j++)
        {
            if ((arr[j] - i) == 0)
            {
                count++;
            }
        }
        if (count > 1)
        {
            cout << i;
        }
    }

    return 0;
}
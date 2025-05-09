#include <bits/stdc++.h>
using namespace std;


int min_dist(vector<int> v)
{
    int c = 0;
    for (int i = 0; i < v.size()-1; i++)
    {
        if(v[i]==v[i+1])
        {
            ++c;
        }
    }
    return c;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int min=INT_MAX,n,x,cnt=0;
        cin >> n;
        vector<int> v,arr;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            arr.push_back(x);
        }

        v = arr;

        while()
        {
            for (int i = 0; i < n-1; i++)
            {
                if(v[i]==v[i+1])
                {
                    swap(v[i], v[n - i]);
                }
                
            }
            cnt = min_dist(v);
            if(min>cnt)
            {
                min = cnt;
            }
        }
    }

    return 0;
}
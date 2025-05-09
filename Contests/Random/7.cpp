#include <bits/stdc++.h>
using namespace std;

int main()
{
    int w,n,m, matches;
    vector<int> a;
    cin >> n;
    for (int i = 0; i < n;i++)
    {
        cin >> w;
        a.push_back(w);
    }
    cin >> m;
    while(m--)
    {
        matches = 0;
        int l, r;
        cin >> l >> r;
        if(l<=r)
        {
            for (int i = l-1; i <= r-1;i++)
            {
                if((fmod(a[i],(r-l+1)))==0)
                {
                    ++matches;
                }
            }
        }
        
        cout << matches<<endl;
    }
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int w, m, n, matches = 0;
    vector<int> knights;
    vector<int> dragons;
    cin >> n;
    for (int i = 0; i < n;i++)
    {
        cin >> w;
        knights.push_back(w);
    }
    cin >> m;
    w = 0;
    for (int i = 0; i < m;i++)
    {
        cin >> w;
        dragons.push_back(w);
    }

    sort(knights.begin(), knights.end());
    sort(dragons.begin(), dragons.end());

    for (auto j = 0; j < n;j++)
    {
        for (auto k = 0; k < m;k++)
        {
            if(abs(knights[j]-dragons[k])==1||knights[j]==dragons[k])
            {
                ++matches;
                knights.erase(j);
                dragons.erase(k);
            }
        }
    }

    // for(auto it : knights)
    // {
    //     cout << it << " ";
    // }
    // cout<<endl;
    // for(auto itd:dragons)
    // {
    //     cout << itd << " ";
    // }
    // for (auto it : knights)
    // {
    //     for (int k = 0; k < m;k++)
    //     {
    //         if(abs(it-dragons[k])==1||abs(it-dragons[k])==0)
    //         {
    //             ++matches;
    //             // auto it = find(knights.begin(), knights.end(), knights[j]);
    //             knights.pop_back();
    //             auto itd = find(dragons.begin(), dragons.end(), dragons[k]);
    //             dragons.erase(itd);
    //         }
    //     }
    // }
     cout << endl<< matches;
}
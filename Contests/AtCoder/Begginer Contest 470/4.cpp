#include <bits/stdc++.h>
using namespace std;

int main()
{
    int rows, cols, n;
    cin >> rows >> cols >> n;
    vector<pair<int, int>> trashGrid(n);
    for (int i = 0; i < n; i++)
    {
        cin >> trashGrid[i].first >> trashGrid[i].second;
    }
    
    int q;
    cin >> q;
    vector<pair<int, int>> queries(q);
    for (int i = 0; i < q; i++)
    {
        cin >> queries[i].first >> queries[i].second;
    }

    map<pair<int,int>,bool> mpp;

    for(auto it:trashGrid)
    {
        mpp[{it.first, it.second}] = false;
    }

    for(auto it:queries)
    {
        int cnt = 0;
        if(it.first == 1)
        {
            for(auto itr:mpp)
            {
                if(itr.first.first == it.second && mpp[itr.first] == false)
                {
                    cnt++;
                    mpp[itr.first] = true;
                }
            }
            cout << cnt << endl;
        }
        else
        {
            for(auto itr:mpp)
            {
                if(itr.first.second == it.second && mpp[itr.first] == false)
                {
                    cnt++;
                    mpp[itr.first] = true;
                }
            }
            cout << cnt << endl;
        }
    }
    return 0;
}
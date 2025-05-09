#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i=1,x=0,flag;
        cin >> n;
        while((x<=n)&&(-n<=x))
        {
            if(i%2==0)
            {
                x = x -((2 * i) - 1);
                flag = 0;
            }
            else
            {
                x += ((2 * i) - 1);
                flag = 1;
            }
            ++i;
        }
        if(flag==0)
        {
            cout << "Kosuke" << endl;
        }
        else
        {
            cout << "Sakurako" << endl;
        }
    }

    return 0;
}
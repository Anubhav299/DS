#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i = 1,k=1, c = 0;
    string s;
    cin >> s;
    while(i!=s.length())
    {   
        if(s[i]=='-')
        {
            c++;
        }
        else if (s[i] == '|')
        {
            cout << c << " ";
            c = 0;
        }
        i += 1;
    }

    return 0;
}
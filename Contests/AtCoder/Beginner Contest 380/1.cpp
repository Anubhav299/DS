#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i = 0, c1 = 0, c2 = 0, c3 = 0;
    string num;
    char x;
    cin >> n;
    num = to_string(n);
    while(i!=num.length())
    {
        x = num[i];

        if (x != '1' && x != '2' && x != '3')
        {
            cout << "No";
            break;
        }
        else
        {
            if (c1 > 1 || c2 > 2 || c3 > 3)
            {
                cout << "No";
                break;
            }
            else
            {
                if (x == '1')
                {
                    c1++;
                }
                else if(x == '2')
                {
                    c2++;
                }
                else
                {
                    c3++;
                }
            }
        }
        i+=1;
    }
    if(c1 == 1 && c2 == 2 && c3 == 3)
    {
        cout<< "Yes";
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int setbits(int n)
    {
        int c = 0;
        while(n)
        {
            if(n%2==1)
            {
                ++c;
            }
            n/=2;
        }
        return c;
    }

int main()
{
    cout << setbits(15);
}
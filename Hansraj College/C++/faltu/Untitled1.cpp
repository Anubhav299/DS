#include <iostream>
using namespace std;
int dig(int n)
{
	if (n/10 == 0)
        return 1;
    return 1 + dig(n / 10);
}

int main()
{
	int n;
	cin>>n;
	cout<<dig(n);
}

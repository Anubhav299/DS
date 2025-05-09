#include <iostream>
using namespace std;

void fun(int);
void fun (int,int);
int main()
{
fun(100);
fun(100,200);
return 0;
}

void fun(int i)
{

    cout<<i<<endl;
}
void fun(int i, int j)
{
    cout<<i<< " "<<j<<endl;
}

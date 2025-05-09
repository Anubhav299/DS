#include<stdio.h>
int main()
{
    int x = 3, y = 3;
    while(--x,y--)
    {
        --x;
    }
    printf("%x",-2<<5);
}
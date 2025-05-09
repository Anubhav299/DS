#include <stdio.h>

void maxim(int a,int b, int *max);

int main()
{
    int x,y;
    int max;
    printf("Enter First Number : ");
    scanf("%d",&x);
    printf("Enter Second Number : ");
    scanf("%d",&y);

    maxim(x,y,&max);

    printf("Maximum of the two is : %d ",max);
    return 0;
}

void maxim(int a, int b, int *max)
{
    if(a>=b)
    *max=a;
    else
    *max=b;
}
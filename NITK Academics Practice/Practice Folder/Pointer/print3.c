#include<stdio.h>

void DoWork(int a,int b, int *sum, int *prod, int *average);

int main()
{
    int x = 4, y = 5;
    int sum,prod,average;
    DoWork(x,y,&sum,&prod,&average);
    printf("Sum = %d, Product = %d, Average = %d\n", sum,prod,average);

    return 0;
}

void DoWork(int a,int b, int *sum, int *prod, int *average)
{
    *sum=a+b;
    *prod=a*b;
    *average=(a+b)/2;
}
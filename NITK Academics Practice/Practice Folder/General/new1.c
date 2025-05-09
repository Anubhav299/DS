#include<stdio.h>
#include<math.h>
int fibo();

int main()
{
    int co;
    printf("Enter Number : ");
    scanf("%d",&co);
    printf("%d", fibo(co));

    return 0;
}

int fibo(int x)
{
    if(x==0)
    {
        return 0;
    }
    if(x==1)
    {
        return 1;
    }
    int fibo1=fibo(x-1)+fibo(x-2);
    return fibo1;
}
#include <stdio.h>

void tablearr(int arr[][10],int m,int n,int num);

int main()
{
    int table[2][10];

    tablearr(table,0,10,2);
    tablearr(table,1,10,3);

    for(int i=0;i<10l;i++)
    {printf("%d\t", table[0][i]);}

    printf("\n");

    for(int i=0;i<10l;i++)
    {printf("%d\t", table[1][i]);}

    printf("\n");


    return 0;
}

void tablearr(int arr[][10],int m,int n,int num)
{
    for(int i=0;i<n;i++)
    {
        arr[m][i]=num*(i+1);
    }
}
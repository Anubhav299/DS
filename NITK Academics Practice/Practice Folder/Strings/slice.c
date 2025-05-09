#include <stdio.h>

void slicing(char arr[],int n, int m);

int main()
{
    int x,y;
    char str[100];
    fgets(str,100,stdin);
    printf("Enter value of n : ");
    scanf("%d",&x);
    printf("Enter value of m : ");
    scanf("%d",&y);

    slicing(str,x,y);
    return 0;
}

void slicing(char arr[],int n,int m)
{
    int j=0;
    char ar1[100];
    for(int i = n;i<=m;i++,j++)
    {
        ar1[j]=arr[i];
    }
    ar1[j]='\0';
    puts(ar1);
}
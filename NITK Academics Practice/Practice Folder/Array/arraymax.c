#include <stdio.h>

void arrmax(int arr[],int num);
void _arrmax(int arr[],int num,int *mx);

int main()
{
    int n,max=0;
    printf("Enter Value of n : ");
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter %d Element : ", i+1);
        scanf("%d",&ar[i]);
    }

    // arrmax(ar,n);
    _arrmax(ar,n,&max);
    printf("Maximum Number is %d ", max);

    return 0;
}

void arrmax(int arr[],int num)
{
    int mx=arr[0];
    for(int i=1;i<num;i++)
    {
        if(mx<arr[i])
        mx=arr[i];
    }
    printf("Maximum Number is %d ", mx);
}

void _arrmax(int arr[],int num, int *mx)
{
    *mx=arr[0];
    for(int i=1;i<num;i++)
    {
        if(*mx<arr[i])
        *mx=arr[i];
    }
}
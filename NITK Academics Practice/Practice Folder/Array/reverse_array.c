#include <stdio.h>

void reverse(int arr[],int n);
void printarray(int arr[], int n);

int main ()
{
    int ar[5]={1,2,3,4,5};
    reverse(ar,5);
    printarray(ar,5);
    return 0;
}

void reverse(int arr[],int n)
{
    for(int i=0;i<n/2;i++)
    {
        int fval = arr[i];
        int lval = arr[n-i-1];
        arr[i] = lval;
        arr[n-i-1] = fval;
    }
}

void printarray(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
}

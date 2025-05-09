#include <stdio.h>

void arrsearch(int arr[],int num, int xn);
int main()
{   
    int n,x;
    printf("Enter Value of n : ");
    scanf("%d",&n);
    int ar[n];

    for(int i=0;i<n;i++)
    {
        printf("Enter %d term : ",i);
        scanf("%d",&ar[i]);
    }

    printf("Enter Value to be searched : ");
    scanf("%d",&x);

    arrsearch(ar,n,x);
    return 0;
}


void arrsearch(int arr[],int num, int xn)
{
    int c=0;
    for(int i=0;i<num;i++)
    {
        if(arr[i]==xn)
        {
            ++c;
        }

    }
    if(c==0)
    {
        printf("Number not Found.");
    }
    else 
    {printf("Number found %d time(s). ",c);}
}

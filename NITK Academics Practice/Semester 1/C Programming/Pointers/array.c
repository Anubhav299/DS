//Write a program in C to store n elements in an array and print the elements using a pointer.


#include <stdio.h>

int main()
{
    int n,*p;
    printf("Enter N : ");
    scanf("%d", &n);
    int arr[n];
    p = arr;
    for (int i = 0; i < n; i++)
    {
        printf("Enter Element %d : ", i + 1);
        scanf("%d", p + i);
    }

    for (int i = 0; i < n; i++)
    {
        // printf("Enter Element %d : ", i + 1);
        printf(" %d ", *(p + i));
    }    

}
//swap two numbers using pointers

#include <stdio.h>


void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}


int main()
{
    int a, b;
    printf("Enter numbers : ");
    scanf("%d %d", &a, &b);
    printf("Numbers before swapping a = %d and b = %d", a, b);
    swap(&a, &b);
    printf("\nNumbers after swapping a = %d and b = %d", a, b);
    return 0;
}
#include <stdio.h>

int main()
{
    int x=77;
    int *ptr=&x;
    printf("The Value of Pointer is : %p",ptr);
    printf("\n");
    printf("The Value of the variable is : %u",*ptr);
    return 0;
}
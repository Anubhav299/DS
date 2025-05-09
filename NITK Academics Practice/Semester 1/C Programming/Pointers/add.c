#include <stdio.h>

int main() 
{
    int num1, num2, sum;
    int *ptr1, *ptr2;

    // Point the pointers to the variables
    ptr1 = &num1;
    ptr2 = &num2;

    // Input numbers from the user
    printf("Enter the first number: ");
    scanf("%d", ptr1);
    printf("Enter the second number: ");
    scanf("%d", ptr2);

    // Calculate the sum using pointers
    sum = *ptr1 + *ptr2;

    // Display the result
    printf("The sum of %d and %d is %d\n", *ptr1, *ptr2, sum);

    return 0;
}

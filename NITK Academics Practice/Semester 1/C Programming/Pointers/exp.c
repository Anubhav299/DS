#include <stdio.h>

int main()
{
    int n1 = 3, n2 = 5, sum;
    int *p1, *p2;
    p1 = &n1;
    p2 = &n2;
    sum = *p1 + *p2;
    printf("Answer is : %d", sum);
    return 0;
}
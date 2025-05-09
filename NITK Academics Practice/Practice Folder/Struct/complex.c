#include <stdio.h>

typedef struct complex 
{
    int real;
    int imag;
}c;

int main()
{
    c c1={2,4};
    c *ptr = & c1;
    printf("Real Part : %d\n",ptr->real);
    printf("Imaginary Part : %d\n",ptr->imag);

    return 0;
} 
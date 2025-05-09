#include<stdio.h>

void cube(int a);
void _cube(int *a);

int main()
{
    int x=5;
    cube(x);
    printf("x = %d\n",x);
    _cube(&x);
    printf("x = %d\n",x);

    return 0;
}

//call by value
void cube(int a)
{
    a = a*a*a;
    printf("a = %d\n",a);
}

//call by reference
void _cube(int *a)
{
    *a=(*a)*(*a)*(*a);
    printf("a = %d\n",*a);
}
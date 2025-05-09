// Online C compiler to run C program online
#include <stdio.h>

struct pointer 
{
    char *ptr;  
};
int main() 
{
    struct pointer p = {"Hello"};
    printf("%c",*(p.ptr+1));
    return 0;
}
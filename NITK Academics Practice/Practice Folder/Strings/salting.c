#include <stdio.h>
#include<string.h>

void salting(char arr[]);

int main()
{
    char pass[100];
    scanf("%s",pass);
    salting(pass);

    return 0;
}

void salting(char arr[])
{
    printf("Your New Password : %s", strcat(arr,"123"));
}

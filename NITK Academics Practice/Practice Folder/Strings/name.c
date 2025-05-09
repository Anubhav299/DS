#include <stdio.h>

void printString(char arr[]);

int main()
{
    char firstName[]="Anubhav";
    char lastName[]="Srivastava";

    printString(firstName);
    printString(lastName);
    return 0;
}

void printString(char arr[])
{
    int i=0;
    while (arr[i]!='\0')
    {
        printf("%c",arr[i]);
        i++;
    }
    printf("\n");   
}
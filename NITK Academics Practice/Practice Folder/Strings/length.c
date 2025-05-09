#include <stdio.h>
#include <string.h>

int printLength(char arr[]);

int main()
{
    char ar[]="Anubhav";
    int len = strlen(ar);
    printf("%d",len);

    // fgets(ar,40,stdin);
    // printf("Length is : ");
    // printf("%d",printLength(ar));
    return 0;
}
// using library function






// using manual function
int printLength(char arr[])
{
    int i=0,c=0;
    while(arr[i]!='\0')
    {
        c++;
        i++;
    }
    return c-1;
}
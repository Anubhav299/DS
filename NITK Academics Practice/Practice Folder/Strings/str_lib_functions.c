#include <stdio.h>
#include <string.h>

int main()
{
    char firstName[100]="Anubhav";
    char lastName[]="Srivastava";
    
    // strings concatenate
    strcat(firstName,lastName);
    printf("%s",firstName);
    printf("\n");    
    
    // strings compare

    int l = strcmp(firstName,lastName);
    printf("%d",l);
    printf("\n");    

    // string copy
    strcpy(firstName,lastName);
    printf("%s",firstName);
    printf("\n");

    
}
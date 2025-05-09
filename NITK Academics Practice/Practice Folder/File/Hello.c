#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("NewText.txt","r");
    if(fptr == NULL)
    {
        printf("File does not exist.");
    }
    else 
    fclose(fptr);
    
    return 0;
}

#include <stdio.h>

int main()
{   
    FILE *fptr;
    fptr=fopen("Text.txt","w");

    fputc('A', fptr);
    fputc('N', fptr);
    fputc('U', fptr);
    fputc('B', fptr);
    fputc('H', fptr);
    fputc('A', fptr);
    fputc('V', fptr);

    // printf("%c\n",fgetc(fptr));
    // printf("%c\n",fgetc(fptr));
    // printf("%c\n",fgetc(fptr));
    // printf("%c\n",fgetc(fptr));
    // printf("%c\n",fgetc(fptr));

    fclose(fptr);
    return 0;
}
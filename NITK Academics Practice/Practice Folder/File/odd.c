#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr=fopen("OddFile.txt","w");
    int n;

    printf("Enter Value of n :");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        if(i%2!=0)
        {
            fprintf(fptr,"%d\n",i);
        }
    }

    fclose(fptr);
    return 0;
}
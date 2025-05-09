#include <stdio.h>

// scanf does not input after space therefore, we use "fgets" for inputing and "puts" for printing
//fgets(str,n,file loc) use stdin in file loc for now

int main()
{
    char fullName[50];

    fgets(fullName,50,stdin);
    puts(fullName);
    // printf("Enter your Full Name : ");
    // scanf("%s",fullName);    
    // printf("Your full name is : %s", fullName);
}



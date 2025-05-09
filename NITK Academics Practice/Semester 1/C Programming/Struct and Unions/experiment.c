//Create a structure called "Student" with members name, age, and total
//marks. Write a C program to input data for two students, display their
//information, and find the average of total marks.

#include <stdio.h>
#include <string.h>

struct student 
{
    int age;
    char name[20];
    int total;
};


int main()
{
    struct student n1;
    printf("Enter Age, Name and Marks : ");
    //scanf("%d %s %d",&n1.age,n1.name,&n1.total);

    strcpy(n1.name,"Anubhav");

    printf("%d %s %d", n1.age, n1.name, n1.total);
    return 0;
}
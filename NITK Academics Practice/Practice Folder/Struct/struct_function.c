#include <stdio.h>
#include<string.h>

struct student 
{
    int roll;
    float cgpa;
    char name[100];
};


void printInfo(struct student s1);

int main()
{
    struct student s1={14961,9.0,"Anubhav"};
    printInfo(s1);

    return 0;
}

void printInfo(struct student s1)
{
    printf("Name is : %s\n",s1.name);
    printf("Roll No. is : %d\n",s1.roll);
    printf("CGPA is : %f\n",s1.cgpa);
}
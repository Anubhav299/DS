#include<stdio.h>

typedef struct student 
{
    char name[100];
    int roll;
    float cgpa;
}stu;

int main()
{
    stu s1={"Anubhav",14961,9.0};
    printf("Name is : %s\n",s1.name);
    printf("Roll No. is : %d\n",s1.roll);
    printf("CGPA is : %f\n",s1.cgpa);

    return 0;
}
#include <stdio.h>
#include <string.h>

struct student 
{
    char name[100];
    int roll;
    float cgpa;
};

int main()
{   
    struct student s1 = {"Anubhav",14961,9.0};
    struct student *ptr = &s1;
    printf("Name is : %s\n",(*ptr).name);

    printf("Student->Name : %s\n",ptr->name);
    printf("Student->Roll : %d\n",ptr->roll);
    printf("Student->CGPA : %f\n",ptr->cgpa);

    return 0;    
}
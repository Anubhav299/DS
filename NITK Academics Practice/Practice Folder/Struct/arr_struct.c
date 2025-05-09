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
    // struct student ece[2];
    // ece[0].cgpa=9.0;
    // ece[0].roll=14961;
    // strcpy(ece[0].name,"Anubhav");

    struct student s1={"Anubhav",14961,9.0};
    printf("Name is : %s\n",s1.name);
    printf("Roll No. is : %d\n",s1.roll);
    printf("CGPA is : %f\n",s1.cgpa);


    

    return 0;
}


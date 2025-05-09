#include <stdio.h>
#include <string.h>

struct student
{
    int roll;
    float cgpa;
    char name[100];
};


int main()
{
    struct student s1;
    s1.cgpa=9.1;
    s1.roll=14961;
    strcpy(s1.name,"Anubhav Srivastava");

    printf("Name is : %s\n",s1.name);
    printf("Roll No. is : %d\n",s1.roll);
    printf("CGPA is : %f\n",s1.cgpa);

    struct student s2;
    s2.cgpa=8.0;
    s2.roll=124;
    strcpy(s2.name,"Joshi");

    
    struct student s3;
    s3.roll=546;
    s3.cgpa=7.0;
    strcpy(s3.name,"Pardeep");

    return 0;
}
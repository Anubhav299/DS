#include<iostream>
using namespace std;
#include<string.h>

class Person
{
    char name[10];
    unsigned int dob;
    public:
        Person()
        {
            strcpy(name,"ABC");
            dob = 0;
        }
        void getdata()
        {
            cout<<"Enter the name"<<endl;
            cin>>name;
            cout<<"Enter the date of birth in ddmmyyyy format"<<endl;
            cin>>dob;
            if(dob<0)
            {
            	cout<<"Enter Valid Birthdate. "<<endl;
				cin>>dob;
			}
        }
        void showdata()
        {
            cout<<"Name of person "<<name<<endl;
            cout<<"Date of birth "<<dob<<endl;
        }
};

class student:public Person
{
    int rollno;
    public:
       void getdata()
       {
           Person:: getdata();
           cout<<"Enter the rollno "<<endl;
           cin>>rollno;
       }
       void showdata()
       {
           Person::showdata();
           cout<<"Roll no "<<rollno<<endl;
       }

};

class teacher:public Person
{
    int ecode;
    public:
       teacher()
       {
           ecode = 0;
       }
       void getdata()
       {
           Person::getdata();
           cout<<"Enter the Employee code "<<endl;
           cin>>ecode;
       }
       void showdata()
       {
           Person::showdata();
           cout<<"Ecode of Person "<<ecode<<endl;
       }
};


int main()
{
    Person p;
    p.getdata();
    p.showdata();
    student s;
    s.getdata();
    s.showdata();
    teacher t;
    t.getdata();
    t.showdata();   
    return 0;
}

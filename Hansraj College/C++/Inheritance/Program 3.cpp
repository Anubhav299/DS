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
            cout<<"Enter the name - ";
            cin>>name;
            cout<<"Enter the date of birth in ddmmyyyy format - ";
            cin>>dob;
            cout<<endl;
        }
        void showdata()
        {
            cout<<"Name of person - "<<name<<endl;
            cout<<"Date of birth - "<<dob<<endl;
        }
};

class student:public Person
{
    protected:
		int rollno;
    public:
       void getdata()
       {
           Person:: getdata();
           cout<<"Enter the rollno - ";
           cin>>rollno;
       }
       void showdata()
       {
           Person::showdata();
           cout<<"Roll no - "<<rollno<<endl;
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
           cout<<"Enter the Employee code - ";
           cin>>ecode;
       }
       void showdata()
       {
           Person::showdata();
           cout<<"Ecode of Person - "<<ecode<<endl;
       }
};


class teach_assi:public student,public teacher
{
    char dep[20],present[20];
    public:
    teach_assi()
    {
        strcpy(dep,"Unknown");
        strcpy(present, "None");
    }
    void getdata()
    {
    	cout<<"Enter Roll No - ";
    	cin>>student::rollno;
        teacher::getdata();
        cout<<"Enter the department - ";
        cin>>dep;
        cout<<"Mphil or Phd student - ";
        cin>>present;
        cout<<endl;
    }

    void showdata()
    {
        teacher::showdata();
        cout<<"Roll No. - " <<rollno<<endl;
        cout<<"Department is - "<<dep<<endl;
        cout<<"Currently working - "<<present<<endl;
    }
};


int main()
{
    Person p;
    p.getdata();
    p.showdata();
    teacher t;
    t.getdata();
    t.showdata();
    cout<<"*************"<<endl;
    teach_assi r1;
    r1.getdata();
    r1.showdata();   
    return 0;
}

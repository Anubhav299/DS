#include<iostream>
using namespace std;
#include<string.h>

class Person
{
    char name[10];
    unsigned int dob;
    protected:
    	int i = 10;
    	print1()
    	{
    		cout<<"************* ";
    		cout<<i;
		}
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
        }
        void showdata()
        {
            cout<<"Name of person "<<name<<endl;
            cout<<"Date of birth "<<dob<<endl;
        }
};



class teacher:protected Person
{
    int ecode,teach_exp,paper;
    public:
    	void print1()
       {
       	Person::print1();
	   }
	public:
       teacher()
       {
           ecode = 0;
           teach_exp = 0; 
           paper = 0;
       }
       void getdata()
       {
           Person::getdata();
           cout<<"Enter the Employee code "<<endl;
           cin>>ecode;
           cout<<"Enter the past teaching experience "<<endl;
           cin>>teach_exp;
           cout<<"Research Papers published "<<endl;
           cin>>paper;
       }
       void showdata()
       {
           Person::showdata();
           cout<<"Ecode of Person "<<ecode<<endl;
           cout<<"Teaching Experience "<<teach_exp<<endl;
           cout<<"Papers published "<<paper<<endl;
       }
       
};


class principal:public teacher
{
    int year_app,exper;
    public:
    void getdata()
    {
        teacher::getdata();
        cout<<"Enter the year of appointment "<<endl;
        cin>>year_app;
        cout<<"Expertise in "<<endl;
        cin>>exper;
    }

    void showdata()
    {
        teacher::showdata();
        cout<<"Year of appointment is  "<<year_app<<endl;
        cout<<"Expertise in "<<exper<<endl;
    }

    void showyear()
    {
        cout<<"Year of appointment is  "<<year_app<<endl;       
    }
	void print1()
	{
		teacher::print1();
	}
};

int main()
{
    teacher t1;
    t1.getdata();
    cout<<endl;
    t1.showdata();
    cout<<endl;
    t1.print1();
    cout<<endl;
    principal p1;
    p1.getdata();
    cout<<endl;
    p1.showdata();
    cout<<endl;   
    p1.showyear();
    cout<<endl;
    p1.print1();
    return 0;
}

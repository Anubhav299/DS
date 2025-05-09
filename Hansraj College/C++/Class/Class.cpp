#include<iostream>
using namespace std;
const int student=5;
const int subject=3;

class Student
{
	private:
		unsigned int rollno;
    	char name[20];
    	int marks[subject];
	public:
		void getdata()
		{
			cout<<"Enter Roll no. of Student: ";
        	cin>>rollno;
        	cout<<"Enter the Name of Student: ";
        	cin>>name;
        	for (int j=0;j<subject;j++)
			{
				cout<<"Enter Marks out of 100 for Subject " <<j+1<<" : ";
				cin>>marks[j];
				if(marks[j]<0 || marks[j]>100)
				{
					while(marks[j]<0 || marks[j]>100)
					{
						cout<<"Wrong Input."<<"\n";
						cout<<"Enter marks between 0 and 100."<<"\n";
						cin>>marks[j];
					}
				}
			}
		}
		void showdata()
		{
        cout<<"\n"<<"Roll number: "<<rollno;
        cout<<"\n"<<"Name: "<<name<<"\n";
        for (int j=0;j<subject;j++)
		{
            cout<<"Marks in Subject "<<j+1<<" are : "<<marks[j]<<"\n";
        }
        cout<<"\n";
    }
};
int main()
{
    Student s[student];
    for (int x=0; x<student;x++)
	{
        s[x].getdata();
    }
    system("cls");
    for (int z=0; z<student;z++)
	{
        s[z].showdata();
    }
}

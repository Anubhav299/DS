#include<iostream>
using namespace std;
const int student=5;
const int subject=3;
struct marks
{
    unsigned int rollno;
    char name[20];
    int scores[subject];
};
void Display(struct marks m[]);
void Total(struct marks m[]);
void Average_Student(struct marks m[]);
void Average_Subject(struct marks m[]);
void Max_Min_Subject(struct marks m[]);
void Max_Min_Student(struct marks m[]);	
int main()
{
	marks m[student];
		for (int i=0;i<student;i++)
	{
        cout<<"Enter Roll no. of Student: ";
        cin>>m[i].rollno;
        cout<<"Enter the Name of Student: ";
        cin>>m[i].name;
		for (int j=0;j<subject;j++)
		{
			cout<<"Enter Marks out of 100 for Student " <<i+1<<" Subject " <<j+1<<" : ";
			cin>>m[i].scores[j];
			if(m[i].scores[j]<0 || m[i].scores[j]>100)
			{
				while(m[i].scores[j]<0 || m[i].scores[j]>100)
				{
				cout<<"Wrong Input.";
				cout<<"Enter marks between 0 and 100."<<"\n";
				cin>>m[i].scores[j];
				}
			}
		}
	}
	int ch=1;
	while (ch!=0)
	{
		cout<<"\n";
		cout<<"0. Exit\n";
		cout<<"1. To Display Marks\n";
		cout<<"2. Total Marks of Each Student\n";
		cout<<"3. Average Marks of each Student\n";
		cout<<"4. Average Marks in each Subject\n";
		cout<<"5. Maximum and Minimum Marks in each Subject\n";
		cout<<"6. Maximum and Minimum  Marks of each Student\n";
		cout<<"Enter Your Choice : "; 
		cin>>ch;
		system("cls");
		switch(ch)
		{
			case 0:
				cout<<"Bye!!";
    	  		break;
			case 1:
				Display(m);
				break;
			case 2:
				Total(m);
				break;
			case 3:
				Average_Student(m);
				break;
			case 4:
				Average_Subject(m);
				break;
			case 5:
				Max_Min_Subject(m);
				break;
			case 6:
				Max_Min_Student(m);
				break;
			default:
				cout<<"Invalid Choice!\n";
				system("pause");
				break;
		}
	}
}

void Display(marks m[])
{
	for (int i=0;i<student;i++)
	{
		cout<<"Marks of "<<m[i].name<<" Student are "<<" ";
		for (int j=0;j<subject;j++)
		{
			cout<<m[i].scores[j]<<" ";
		}
		cout<<endl;
	}
}

void Total(marks m[])
{
	for (int i=0;i<student;i++)
	{
		int sum=0;
		cout<<"Total Marks of "<<m[i].name<<" Student are "<<" ";
		for (int j=0;j<subject;j++)
		{
			sum=sum+m[i].scores[j];
		}
		cout<<sum;
		cout<<endl;
	}
}
void Average_Student(marks m[])
{
	for (int i=0;i<student;i++)
	{
		int sum=0;
		cout<<"Average Marks of "<<m[i].name<<" Student is "<<" ";
		for (int j=0;j<subject;j++)
		{
			sum=sum+m[i].scores[j];
		}
		cout<<sum/subject;
		cout<<endl;
	}
}
void Average_Subject(marks m[])
{
	for(int j=0;j<subject;j++)
	{
		int sum=0;
		cout<<"Average Marks of "<<j+1<<" Subject is "<<" ";
	for(int i=0;i<student;i++)
	{
		sum=sum+m[i].scores[j];
	}
		cout<<sum/student;
		cout<<endl;
	}
}
void Max_Min_Subject(marks m[])
{
	for (int j=0;j<subject;j++)
	{
		int max=0;
		int min=101;
		cout<<"Subject "<< j+1 <<"\n";
		for (int i=0;i<student;i++)
		{
			if (m[i].scores[j]>max)
				max=m[i].scores[j];
			if (m[i].scores[j]<min)
				min=m[i].scores[j];
		}
		cout<<"Maximum Marks : "<< max << "\n"; 
		cout<<"Minimum Marks : "<< min << "\n";
		cout<<endl;
		}
}
void Max_Min_Student(marks m[])
{
	for (int i=0;i<student;i++)
	{
		int max=0;
		int min=101;
		cout<<m[i].name<<" Student " <<"\n";
		for (int j=0;j<subject;j++)
		{
			if (m[i].scores[j]>max)
				max=m[i].scores[j];
			if (m[i].scores[j]<min)
				min=m[i].scores[j];
		}
		cout<<"Maximum Marks : "<< max<< "\n";; 
		cout<<"Minimum Marks : "<<min<< "\n";;
		cout<<endl;
	}
}

#include<iostream>
using namespace std;
const int student=5;
const int subject=3;
void Display(int [student][subject]);
void Total(int marks[student][subject]);
void Average_Student(int marks[student][subject]);
void Average_Subject(int marks[student][subject]);
void Max_Min_Subject(int marks[student][subject]);
void Max_Min_Student(int marks[student][subject]);	
int main()
{
	int marks[student][subject];
	for (int i=0;i<student;i++)
	{
		for (int j=0;j<subject;j++)
		{
			cout<<"Enter Marks out of 100 for Student " <<i+1<<" Subject " <<j+1<<" : ";
			cin>>marks[i][j];
			if(marks[i][j]<0||marks[i][j]>100)
			{
				while(marks[i][j]<0 || marks[i][j]>100)
				{
					cout<<"Wrong Input."<<"\n";
					cout<<"Enter marks between 0 and 100."<<"\n";
					cin>>marks[i][j];
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
				Display(marks);
				break;
			case 2:
				Total(marks);
				break;
			case 3:
				Average_Student(marks);
				break;
			case 4:
				Average_Subject(marks);
				break;
			case 5:
				Max_Min_Subject(marks);
				break;
			case 6:
				Max_Min_Student(marks);
				break;
			default:
				cout<<"Invalid Choice!\n";
				system("pause");
				break;
		}
	}
}

void Display(int marks[student][subject])
{
	for (int i=0;i<student;i++)
	{
		cout<<"Marks of Student "<<i+1<<" are "<<" ";
		for (int j=0;j<subject;j++)
		{
			cout<<marks[i][j]<<" ";
		}
		cout<<endl;
	}
}
void Total(int marks[student][subject])
{
	for (int i=0;i<student;i++)
	{
		int sum=0;
		cout<<"Total Marks of "<<i+1<<" Student are "<<" ";
		for (int j=0;j<subject;j++)
		{
			sum=sum+marks[i][j];
		}
		cout<<sum;
		cout<<endl;
	}
}
void Average_Student(int marks[student][subject])
{
	for (int i=0;i<student;i++)
	{
		int sum=0;
		cout<<"Average Marks of "<<i+1<<" Student is "<<" ";
		for (int j=0;j<subject;j++)
		{
			sum=sum+marks[i][j];
		}
		cout<<sum/subject;
		cout<<endl;
	}
}
void Average_Subject(int marks[student][subject])
{
	for(int j=0;j<subject;j++)
	{
		int sum=0;
		cout<<"Average of "<<j+1<<" Subject is "<<" ";
	for(int i=0;i<student;i++)
	{
		sum=sum+marks[i][j];
	}
		cout<<sum/student;
		cout<<endl;
	}
}
void Max_Min_Subject(int marks[student][subject])
{
	for (int j=0;j<subject;j++)
	{
		int max=0;
		int min=101;
		cout<<"Subject "<< j+1 <<"\n";
		for (int i=0;i<student;i++)
		{
			if (marks[i][j]>max)
				max=marks[i][j];
			if (marks[i][j]<min)
				min=marks[i][j];
		}
		cout<<"Maximum Marks : "<< max << "\n"; 
		cout<<"Minimum Marks : "<< min << "\n";
		cout<<endl;
		}
}
void Max_Min_Student(int marks[student][subject])
{
	for (int i=0;i<student;i++)
	{
		int max=0;
		int min=101;
		cout<<"Student "<< i+1 <<"\n";
		for (int j=0;j<subject;j++)
		{
			if (marks[i][j]>max)
				max=marks[i][j];
			if (marks[i][j]<min)
				min=marks[i][j];
		}
		cout<<"Maximum Marks : "<< max<< "\n";; 
		cout<<"Minimum Marks : "<<min<< "\n";;
		cout<<endl;
	}
}

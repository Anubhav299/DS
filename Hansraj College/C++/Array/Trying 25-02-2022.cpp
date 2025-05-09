
#include <iostream>
using namespace std;
const int student=5;
const int subject=3;
void Display(int [][]);
void Total(int [][]);
void Average_Student(int [][]);
void Average_Subject(int [][]);
void Max_Min_Subject(int [][]);
void Max_Min_Student(int [][]);

int main()
{
int n,ch=1;

while (ch!=7)
{
	cout<<endl<<"\n";
	cout<<"========= Menu =========";
	cout<<endl<<"||1. To Display the Data.";
	cout<<endl<<"||2. Total of each Student. ";
	cout<<endl<<"||3. Average of each Student.";
	cout<<endl<<"||4. Average of each Subject. ";
	cout<<endl<<"||5. Maximum and Minimum in each Subject. ";
	cout<<endl<<"||6. Maximum and Minimum of each Student.";
	cout<<endl<<"||7. Exit.";
	cout<<endl<<"========================\n";
	cout<<endl<<"-----Enter Your Choice: ";
	
	cin>>ch;
	system("CLS");
	switch(ch)
	{
  		case 1:
			Display(marks[Student][Subject]);
			break;
		
		case 2:
			Total(arr,nmarks[Student][Subject]);
			break;
		
		case 3:
			
			break;
			
		case 4:
			even_v(arr,n);
			break;
		
		case 5:
			odd_v(arr,n);
			break;
		
		case 6:
			for (int i=0;i<n;i++)
			{
				prime(arr[i]);
			}
			break;
			
		case 7:
			int s;
			cout<<"Enter Element to be searched : ";
			cin>>s;
			search(arr,n,s);
			break;	
					
		case 8:
      		cout<<"Bye!!";
      		break;
      	
  		default:
      		cout<<"Invalid Choice!\n";
      		cout<<"Please choose a Valid Number.";
      		break;
	}
system("pause");
system("CLS");
cout<<"Original Array"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
return 0;
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
		cout<<"Total Marks of "<<i+1<<" student are "<<" ";
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
		cout<<"Average Marks of "<<i+1<<" student is "<<" ";
		for (int j=0;j<subject;j++)
		{
			sum=sum+marks[i][j];
		}
		cout<<sum/3;
		cout<<endl;
	}
}
void Average_Subject(int marks[student][subject])
{
	for(int j=0;j<subject;j++)
	{
		int sum=0;
		cout<<"Average of "<<j+1<<" subject is "<<" ";
	for(int i=0;i<student;i++)
	{
		sum=sum+marks[i][j];
	}
		cout<<sum/5;
		cout<<endl;
	}
}
void Max_Min_Subject(int marks[student][subject])
{
	for (int j=0;j<subject;j++)
	{
		int max=0;
		int min=101;
		cout<<"Maximum and Minimum marks of "<<j+1<<" subject is "<<" ";
	for (int i=0;i<student;i++)
	{
			if (marks[i][j]>max)
				max=marks[i][j];
			if (marks[i][j]<min);
				min=marks[i][j];
	}
		cout<<"Maximum Marks : "<< max << endl;
		cout<<"Minimum Marks : "<< min << endl;
	}
}
void Max_Min_Student(int marks[student][subject])
{
	for (int i=0;i<student;i++)
	{
		int max=0;
		int min=101;
		cout<<"Maximum and Minimum marks of "<<i+1<<" student is "<<" ";
	for (int j=0;j<subject;j++)
	{
			if (marks[i][j]>max)
				max=marks[i][j];
			if (marks[i][j]<min);
				min=marks[i][j];
	}
		cout<<max<<" "<<min;
		cout<<endl;
	}
}

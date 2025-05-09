#include <iostream>
using namespace std;
char grade(int);
int main()
{
	int marks;
	char g;
	cout<<"Enter Marks : ";
	cin>>marks;
	if(marks<=100 && marks>=0)
	{
		g = grade(marks);
		cout<<"Grade: "<<g<<endl;
	}
	else
		cout<<"Wrong Input."<<endl;
	return 0;
}
char grade(int marks)
{
	if (marks>=90)
  	return 'A';
	else if (marks>=80)
  	return 'B';
	else if (marks>=70)
  	return 'C';
  	else if (marks>=60)
  	return 'D';
  	else if (marks>=50)
  	return 'E';
  	else
  	return 'F';
}


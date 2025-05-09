//Input marks on 100 and output the grades (90,80,70,60,50) (A,B,C,D,E,F)
#include <iostream>
using namespace std;
void grade(int,char&);
int main()
{
	int marks;
	char s;
	cout << "Enter Marks out of 100 : ";
	cin >> marks;
	if(marks<=100 && marks>=0)
	{
		grade(marks,s);
		cout<<"Grade: "<<s<<endl;
	}	
	else
	{
		cout<<"Wrong Input."<<endl;
	}	
  	return 0;
}

void grade(int marks,char&ss)
{	
	if (marks>=90)
  	ss = 'A';
	else if (marks>=80)
  	ss = 'B';
	else if (marks>=70)
  	ss = 'C';
  	else if (marks>=60)
  	ss = 'D';
  	else if (marks>=50)
  	ss = 'E';
  	else
  	ss = 'F';
}

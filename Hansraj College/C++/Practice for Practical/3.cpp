#include <iostream>
using namespace std;
void grade(int,char&);
void largest(int,int,int,int&);
void factorial(int,long long&);
void prime(int,char&);
void hcfandlcm(int,int,int&,int&);
//void area(int);
//void area(int,int);
//inline area(int);
//inline area(int,int);

int main()
{
	int ch=0;
	while(ch!=6)
	{
		cout<<"Enter Choice - ";
		cin>>ch;
		switch(ch)
		{
			case 1:
				int marks;
				char g;
				cout<<"Enter Marks."<<endl;
				cin>>marks;
				if(marks<=100 && marks>=0)
				{
					grade(marks,g);
					cout<<"Grade: "<<g<<endl;
				}	
				else
				{
					cout<<"Wrong Input."<<endl;
				}
				break;
			case 2:
				int n1,n2,n3;
				static int x=0;
				cout<<"Enter Numbers."<<endl;
				cin>>n1;
				cin>>n2;
				cin>>n3;
				largest(n1,n2,n3,x);
				cout<<"Largest Number is : "<<x;
				break;
			case 3:
				int num;
				static long long f = 1;
				cout<<"Enter Number - ";
				cin>>num;
				factorial(num,f);
				cout<<"Factorial : "<<f;
				break;
			case 4:
				int n;
				static char p ='T';
				cout<<"Enter Number.";
				cin>>n;
				prime(n,p);
				if(p =='T')
				{
					cout<<"Prime Number.";
				}
				else if (p =='F')
				{
					cout<<"Composite Number.";
				}
				else if (p =='Q')
				{
					cout<<"Neither Prime nor Composite.";
				}
				break;
			case 5:
				int a,b;
				static int h,l;
				cout<<"Enter Numbers - ";
				cin>>a;
				cin>>b;
				hcfandlcm(a,b,h,l);
				cout<<"LCM of "<< a <<" and "<< b <<" is "<<l<<endl;
				cout<<"HCF of "<< a <<" and "<< b <<" is "<<h;
				break;
			case 6:
				cout<<"Thank You.";
				break;
			default:
				cout<<"Invalid Choice, Enter Again."<<endl;
				break;
		}
		cout<<endl;
system("pause");
system("CLS");
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

void largest(int n1,int n2,int n3,int&x)
{
    if(n1 >= n2 && n1 >= n3)
    x=n1;
    else if(n2 > n3)
    x=n2;
    else
    x=n3;  
}

void factorial(int num,long long&f)
{
	for(int i=1;i<=num;i++)
	{
		f=f*i;
	}
}

void prime(int n,char&p)
{	
	int i=2;
	if (n<=1)
	{
		p='Q';
	}
	else
	{
		while ((i<= n/2) && (p=='T'))
		{
			if (n%i==0)
			{
				p='F';
			}
			i = i+1;
 		}
	}
}

void hcfandlcm(int a,int b,int&h,int&l)
{
	int m=a;
	int n=b;
	while(m!=n)
	{
		if(m<n)
		{
			m=m+a;
		}
		else
		{
			n=n+b;
		}
	}
	l=m;
	
	if(b>a)
	{
		int temp=b;
		b=a;
		a=temp;
	}
	
	for(int i = 1;i<=b;i++)
	{
		if(a%i==0 && b%i ==0)
		{
		h=i;
		}
	}
}



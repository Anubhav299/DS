#include <iostream>
#include <stdlib.h>
using namespace std;
void grade(int);
void largest(int,int,int);
void multi(int);
void leap(int);
void facto(int);
void fibo(int);
void prime(int);
void hcfandlcm(int,int);
void factors(int);
void misc(int);

int main()
{
int ch;
while (ch!=11)
{
cout<<endl<<"\n";
cout<<"========= Menu =========";
cout<<endl<<"||1. Grade based on marks.";
cout<<endl<<"||2. Largest Number Check.";
cout<<endl<<"||3. Multiplication Table.";
cout<<endl<<"||4. Leap Year Check.";
cout<<endl<<"||5. Factorial of a Number.";
cout<<endl<<"||6. Fibonacci Series.";
cout<<endl<<"||7. Prime or Composite.";
cout<<endl<<"||8. HCF and LCM of 2 numbers.";
cout<<endl<<"||9. Factors of a number.";
cout<<endl<<"||10. Sum of Digits, Reverse and Palindrome Check.";
cout<<endl<<"||11. Exit.";
cout<<endl<<"========================\n";
cout<<endl<<"-----Enter Your Choice: ";

cin>>ch;
/*system("CLS");*/
switch(ch)
{
  	case 1:
  		int marks;
		cout<<"Enter Marks : ";
		cin>>marks;
		cout<<"Output :";
        grade(marks);
        break;
  	case 2:
  		int n1,n2,n3;
		cout << "Enter 3 Numbers" << endl;
		cin>>n1>>n2>>n3;	
		cout<<"Output :";
      	largest(n1,n2,n3);
      	break;
	case 3:
		int n;
		cout << "Enter Number: ";
		cin>>n;
		cout<<"Output :";
		multi(n);
		break;
	case 4:
		int y;
		cout << "Enter Year: ";
		cin>>y;
		cout<<"Output :";
		leap(y);
		break;
	case 5:
		int nu;
		cout << "Enter Number: ";
		cin>>nu;
		cout<<"Output :";
		facto(nu);
		break;
	case 6:
		int num;
		cout << "Enter the number of terms: ";
  		cin >> num;
  		cout<<"Output :";
  		cout << "Fibonacci Series is: " << endl;
		fibo(num);
		break;
	case 7:
		int num1;
		cout << "Enter Number: ";
		cin >> num1;
		cout<<"Output :";
		prime(num1);
		break;
	case 8:
		int a,b;
    	cout<<"Enter 1st number : ";
    	cin>>a;
    	cout<<"\nEnter 2nd number : ";
    	cin>>b;
    	cout<<"Output :";
		hcfandlcm(a,b);
		break;
	case 9:
		int nu1;
		cout << " Enter Number: ";
		cin>>nu1;
		cout << "The factors of " << n << " are : ";
		factors(nu1);
		break;
	case 10:
		int nm;
		cout << "Enter Number: ";
		cin>>nm;
		cout<<"Output :";
		misc(nm);
		break;
  	case 11:
      	cout<<"Bye!!";
      	break;
  	default:
      cout<<"Invalid Choice!\n";
      cout<<"Please choose a Valid Number.";
      break;
}
system("pause");
system("CLS");
}
return 0;
}


void grade(int marks)
{
	if(marks<=100 && marks>=0)
	{
		if (marks>=90)
  		cout<<"Grade: A";
		else if (marks>=80)
  		cout<<"Grade: B";
		else if (marks>=70)
  		cout<<"Grade: C";
  		else if (marks>=60)
  		cout<<"Grade: D";
  		else if (marks>=50)
  		cout<<"Grade: E";
  		else
  		cout<<"Grade: F";
  	}
  	else
		cout<<"Wrong Input."<<endl;
}

void largest(int n1,int n2,int n3)
{
    if(n1 >= n2 && n1 >= n3)
        cout << "Largest number: " << n1;
    else if(n2 > n3)
        cout << "Largest number: " << n2;
    else
        cout << "Largest number: " << n3;  
}

void multi(int n)
{
	for(int i=1;i<=10;i++)
	{
  		cout <<n<<" * "<<i<<" = "<<n*i<<endl;
	}
}

void leap(int y)
{
	if( y % 400 == 0 || (y % 4 == 0 && y % 100 != 0))
	cout << y << " is a leap year."<<endl;
	else
	cout << y << " is not a leap year."<<endl;
}

void facto(int n)
{
	long long f=1;
	for(int i=1;i<=n;i++)
	{
		f=f*i;
	}
	cout <<"Factorial of "<< n <<" is "<<f<<endl;
}

void fibo(int n)
{
	int i, a=0, b=1, c;
  	for (i=1; i<=n; i++)
  	{
    	cout << a << "  ";
    	c=a+b;
    	a=b;
    	b=c;
  	}
}

void prime(int n)
{
	int i=2, flag=0;
	if (n<=1)
	cout << "Neither Prime nor Composite.";
	else
	{
	while ((i<= n/2) && (flag == 0))
	{
		if (n%i==0)
		{
			flag = 1;
		}
		i = i+1;
 	}
 	if (flag == 0)
	cout<< n << " is a Prime Number"<<endl;
	else if (flag>0)
	cout<< n <<  " is a Composite Number"<<endl;}
}

void hcfandlcm(int a,int b)
{
	int m,n,hcf;
    m=a;
    n=b;
    while(m!=n)
    {
        if(m < n)
        {
        	m=m+a;
        }
        else
        {
            n=n+b;
        }
    }
    cout<<"\nL.C.M of "<<a<<" and "<<b<<" is  "<<m;
    
    if (b>a)
  	{   
    	int temp = b;
    	b = a;
    	a = temp;
  	}
  	for (int i = 1; i <= b; ++i) 
  	{
    	if (a % i == 0 && b % i ==0) 
    		hcf = i;
  	}
    cout<<"\nH.C.F of "<<b<<" and "<<a<<" is  "<<hcf;
}

void factors(int nu1)
{
	for(int i=1; i <= nu1; i++) 
	{
		if (nu1 % i == 0)
 	  		cout << i << " ";
	}
}

void misc(int nm)
{
	int r,rev,temp,sumofd=0;
	temp=nm;
	while(nm!=0)   
	{    
		r=nm%10;
		rev=(rev*10)+r;
		sumofd+=r;
		nm=nm/10;
	}
	cout<<"Sum of the digits is: "<<sumofd<<endl;
	cout<<"Reverse of the number is: "<<rev<<endl;
	if(temp==rev)
		cout<<"Palindrome Number"<<endl;
	else
		cout<<"Not a Palindrome Number"<<endl;
}

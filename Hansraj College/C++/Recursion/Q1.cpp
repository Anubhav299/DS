// Using Iteration / Recursion implement the following: 
//	Fibonacci series 
//	Sum of first n natural numbers 
//	Calculate the power of a number given the base and the exponent 
//	Calculate the reverse of a number 
//	Factorial of a number 
//	GCD of two numbers 
#include <iostream>
#include <stdlib.h>
using namespace std;

void fib(int);
void summ(int);
void pow(int,int);
void revers(int);
void fac(int);
void hcf(int,int);
int fibo(int);
int sumN(int);
int power(int,int);
int reverse(int);
int fact(int);
int gcd(int,int);


int main()
{
	int c,ch;
	while(c!=3)
	{
		cout<<endl<<"\n";
		cout<<"========= Menu =========";
		cout<<endl<<"1. Iteration.";
		cout<<endl<<"2. Recursion.";
		cout<<endl<<"3. Exit.";
		cout<<endl<<"-----Enter Your Choice: ";
		cin>>ch;
		system("CLS");
		switch(ch)
		{
  			case 1: 
  				while (ch!=7)
				{
				cout<<"========= Menu =========";
				cout<<endl<<"1. Fibonacci Series.";
				cout<<endl<<"2. Sum of first N natural numbers.";
				cout<<endl<<"3. Calculate the power of a number given the base and the exponent.";
				cout<<endl<<"4. Calculate the reverse of a number.";
				cout<<endl<<"5. Factorial of a number.";
				cout<<endl<<"6. GCD of two numbers.";
				cout<<endl<<"7. Exit.";
				cout<<endl<<"========================\n";
				cout<<endl<<"-----Enter Your Choice: ";
				cin>>ch;
				system("CLS");
				switch(ch)
				{
  				case 1:
					int nt;
					cout << "Enter the number of terms: ";
  					cin >> nt;
  					cout << "Fibonacci Series is: " << endl;
					fib(nt);
					break;
				case 2:
					int n;
					cout<<"Enter Number : ";
					cin>>n;
					summ(n);
					break;			
				case 3:
					int bs, p;
    				cout << "Enter Base Number: ";
    				cin >> bs;
    				cout << "Enter Power Number (Positive Integer): ";
    				cin >> p;
	 			    pow(bs,p);
					break;			
				case 4:			
					int nm;
					cout<<"Enter Number : ";
					cin>>nm;
					revers(nm);	
					break;		
				case 5:		
					int no;
					cout<<"Enter Number : ";
					cin>>no;
					fac(no);	
					break;		
				case 6:
					int a,b;
					cout<<"Enter Number : "<<endl;
					cin>>a;
					cin>>b;
					hcf(a,b);
					break;			
				case 7:
      				cout<<"Bye!!";
 			     	break;    	
 			 	default:
 			     	cout<<"Invalid Choice!\n";
  			    	cout<<"Please choose a Valid Number.";
  			    	break;
				}
				cout<<endl;
				system("pause");
				system("CLS");
				}
			case 2:
				while (ch!=7)
				{
				cout<<"========= Menu =========";
				cout<<endl<<"1. Fibonacci Series.";
				cout<<endl<<"2. Sum of first N natural numbers.";
				cout<<endl<<"3. Calculate the power of a number given the base and the exponent.";
				cout<<endl<<"4. Calculate the reverse of a number.";
				cout<<endl<<"5. Factorial of a number.";
				cout<<endl<<"6. GCD of two numbers.";
				cout<<endl<<"7. Exit.";
				cout<<endl<<"========================\n";
				cout<<endl<<"-----Enter Your Choice: ";
				cin>>ch;
				system("CLS");
				switch(ch)
				{
  				case 1:
					int nt,i;
					cout<<"Enter Number : ";
					cin>>nt;
					cout<<"Answer : ";
					i=0;
					while(i<nt)
    				{
        				cout<<" "<<fibo(i);
        				i++;
    				}
					break;
				case 2:
					int n;
					cout<<"Enter Number : ";
					cin>>n;
					cout<<"Answer : "<<sumN(n);
					break;			
				case 3:
					int bs, p;
    				cout << "Enter Base Number: ";
    				cin >> bs;
    				cout << "Enter Power Number (Positive Integer): ";
    				cin >> p;
	 			    cout <<  "Result = " << power(bs,p);
					break;			
				case 4:			
					int num;
					cout<<"Enter Number : ";
					cin>>num;
					cout << "Reverse of the number : " << reverse(num);	
					break;		
				case 5:		
					int no;
					cout<<"Enter Number : ";
					cin>>no;
					cout<<"Factorial : " << fact(no);	
					break;		
				case 6:
					int a,b;
					cout<<"Enter Number : "<<endl;
					cin>>a;
					cin>>b;
					cout<<"GCD of the Numbers : " << gcd(a,b);
					break;			
				case 7:
      				cout<<"Bye!!";
 			     	break;    	
 			 	default:
 			     	cout<<"Invalid Choice!\n";
  			    	cout<<"Please choose a Valid Number.";
  			    	break;
				}
				cout<<endl;
				system("pause");
				system("CLS");
				}

			case 3:
				cout<<"Bye!!";
				break;
			default:
				cout<<"Invalid Choice!\n";
  			    cout<<"Please choose a Valid Number.";
  			    break;
  			cout<<endl;
			system("pause");
			system("CLS");
		}
	}
}

void fib(int nt)
{
	int i, a=0, b=1, c;
  	for (i=1; i<=nt; i++)
  	{
    	cout << a << "  ";
    	c=a+b;
    	a=b;
    	b=c;
  	}
}

void summ(int n)
{	
	int s=0;
	for (int i = 1; i <= n; ++i) 
	{
        s += i;
	}
	cout<<"Answer : " << s;
}

void pow(int bs,int p)
{
	int res=1;
	for(int i = 0; i < p; i++)
	{
        res = res * bs;
    }
    cout <<  "Result = " << res;	
}

void revers(int nm)
{
	int r,rev;
	while(nm!=0)   
	{    
		r=nm%10;
		rev=(rev*10)+r;
		nm=nm/10;
	}
	cout<<"Reverse of the number is: "<<rev<<endl;
}

void fac(int no)
{
	long long f=1;
	for(int i=1;i<=no;i++)
	{
		f=f*i;
	}
	cout <<"Factorial of "<< no <<" is "<<f<<endl;
}

void hcf(int a,int b)
{
	int temp,i,hcf;
	if (b>a)
  	{   
    	temp = b;
    	b = a;
    	a = temp;
  	}
  	for (i = 1; i <= b; ++i) 
  	{
    	if (a % i == 0 && b % i ==0) 
    		hcf = i;
  	}
    cout<<"\n H.C.F of "<<b<<" and "<<a<<" is  "<<hcf;
}

int fibo(int nt)
{
    if((nt==1)||(nt==0))
	{
      	return nt;
   	}		
    return(fibo(nt-1)+fibo(nt-2));
}

int sumN(int n)
{
	if(n<=1)
		return n;
	return n + sumN(n-1);
}

int power(int bs, int p)
{
    if (p != 0)
        return (bs*power(bs, p-1));
    else
        return 1;
}

int reverse(int num) 
{
	static int rev=0;
   	if(num>0)
   	{
    	rev = rev*10 + (num%10);
    	reverse(num/10);
   	} 
    return rev;
}

int fact(int no) 
{
	if(no==1)
	{
		return 1;
	}
	else
	return no * fact(no-1);
}

int gcd(int a,int b)
{
	if(a==0)
		return b;
	if(b==0)
		return a;
	if(a==b)
		return a;
	if(a>b)
		return gcd(a-b,b);
	return gcd(a,b-a);
}


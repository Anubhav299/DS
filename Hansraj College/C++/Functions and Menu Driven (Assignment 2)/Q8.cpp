#include <iostream>
using namespace std;
void hcfandlcm(int,int);
int main() 
{
	int a,b;
    cout<<"Enter 1st number : ";
    cin>>a;
    cout<<"\nEnter 2nd number : ";
    cin>>b;
    hcfandlcm(a,b);
	return 0;
}

void hcfandlcm(int a, int b)
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


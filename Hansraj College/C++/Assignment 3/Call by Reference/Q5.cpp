//Input a number and find the HCF and the LCM of the number.
#include <iostream>
using namespace std;
void hcfandlcm(int,int,int&,int&);
int main() 
{
	int a,b,m=0,hcf=0;
    cout<<"Enter 1st number : ";
    cin>>a;
    cout<<"\nEnter 2nd number : ";
    cin>>b;
    hcfandlcm(a,b,m,hcf);
    cout<<"\nL.C.M of "<<a<<" and "<<b<<" is  "<<m;
    cout<<"\nH.C.F of "<<b<<" and "<<a<<" is  "<<hcf;
	return 0;
}

void hcfandlcm(int a, int b,int&m,int&hcf)
{	
    m=a;
    int n=b;
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
}


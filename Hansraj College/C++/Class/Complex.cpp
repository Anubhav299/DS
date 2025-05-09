#include<iostream>
#include<cmath>
using namespace std;

class Complex
{
	int re,im;
	public:
		Complex()
		{
			re=0;
			im=0;
		}
		Complex(int r,int i)
		{
			re=r;
			im=i;
		}
		void get_data()
		{
        cout<<"Enter the real part of the complex number:- ";
        cin>>re;
        cout<<"Enter the imaginary part of the complex number:- ";
        cin>>im;    
    	}
		void showdata()
		{
			cout<<"\nComplex Number is : "<< re << " + ("<<im<<"i)";		
		}
		Complex add(Complex c)
		{
			Complex co;
			co.re = re + c.re;
			co.im = im + c.im;
			return co;
		}
		Complex subtract(Complex c)
		{
        Complex co;
        co.re = re - c.re;
        co.im = im - c.im;
        return co;
    	}
		void magnitude()
		{
			double mag;
			mag = sqrt((re*re)+(im*im));
			cout<< mag;
		}
		void conjugate()
		{
        im= -(im);
        cout<<"\nConjugate is : "<< re << " + ("<<im<<"i)";	
    	}
};
int main()
{
	Complex c1;
	c1.get_data();
	
	Complex c2;
	c2.get_data();
	
	c1.showdata();
	c2.showdata();
	
	Complex c3;
	c3 = c1.add(c2);
	cout<<"\nAddition of the complex numbers : ";
	c3.showdata();
	
	Complex c4;
	c4 = c1.subtract(c2);
	cout<<"\nSubtraction of the complex numbers : ";
	c4.showdata();
	
	cout<<"\nMagnitude of 1st Complex Number : ";
	c1.magnitude();
	cout<<"\nMagnitude of 2nd Complex Number : ";
	c2.magnitude();
	
	cout<<"\nConjugate of 1st Complex Number : ";
	c1.conjugate();
	cout<<"\nConjugate of 2nd Complex Number : ";
	c2.conjugate();
}

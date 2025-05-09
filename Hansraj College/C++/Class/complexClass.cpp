#include<iostream>
#include<cmath>
using namespace std;

class Complex
{
    int a,b;
    public:
    Complex()
	{
        a=0;
        b=0;
    };
    Complex(int c, int d){
        a=c;
        b=d;
    }
    void display(){
        cout<<"Complex Number is:"<<a<<"+("<<b<<"i)\n";
    };
    Complex add(Complex c){
        Complex temp;
        temp.a = a+c.a;
        temp.b = b+c.b;
        return temp;
    };
    Complex subtract(Complex c){
        Complex temp;
        temp.a = a-c.a;
        temp.b = b-c.b;
        return temp;
    };
    void magnitude(){
        int m;
        m = sqrt((a*a)+(b*b));
        cout<<"Magnitude of complex number is:"<<m<<"\n";
    };
    void conjugate(){
        b= -(b);
        cout<<"Conjugate is:"<<a<<b<<"i\n";
    }
};
int main()
{
    Complex c1(2,4);
    Complex c2(3,6);
    
    c1.display();
    c2.display();
    
    Complex c3;
    c3 = c1.add(c2);
    c3.display();

    Complex c4;
    c4 = c1.subtract(c2);
    c4.display();

    c1.magnitude();
    c2.conjugate();
}

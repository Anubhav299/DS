#include<iostream>
#include<cmath>
using namespace std;

double mag;

class complex{
    private: int a,b;

    public:
    complex()
    {
        a=0;
        b=0;
    };
    complex(int a,int b){
        a=1;
        b=5;

    }
    void get_data(){
        cout<<"Enter the real part of complex number:-";
        cin>>a;
        cout<<"Enter the imaginary part of the complex number:-";
        cin>>b;    
    }
    void display_data(){
        cout<<"The complex number is"<<a<<"+"<<"i("<<b<<")";
    } 
    void display_data(double x){
        cout<<"The result is"<<x;
    }
    complex add(complex c){
        complex new_complex;
			new_complex.a = a+c.a;
			new_complex.b = b+c.b;
			return new_complex;
    }
    complex subtract(complex c){
        complex new_complex;
			new_complex.a =a-c.a;
			new_complex.b =b-c.b;
			return new_complex;
    }
    double magnitude(complex c){
        double magn;
			magn=pow((pow(c.a,2)+pow(c.b,2)),0.5);
			return magn;
    }
    complex conjugate(complex c){
        complex new_complex;
			new_complex.a=c.a;
			new_complex.b=-c.b;
			return new_complex;
        }

    

};

int main(){
    complex c,c_t;
    int ch=1;

   while (ch!=7){

       cout<<endl<<"...............MAIN MENU.............."<<endl;
       cout<<"1.To Enter the data"<<endl;
       cout<<"2.To display the complex number"<<endl;
       cout<<"3.To Add  two complex number"<<endl;
       cout<<"4.To Subtract two complex number"<<endl;
       cout<<"5.Magnitude of a complex number"<<endl;
       cout<<"6.Conjugate of a complex number"<<endl;
       cout<<"7.Exit the program"<<endl;
       cout<<"Enter your choice:-";
       cin>>ch;
       system("cls");
       switch (ch)
       {
       case 1:
           c.get_data();
           break;
        case 2:
           c.display_data();
           break;
        case 3:
            c_t.get_data();
			c_t=c.add(c_t);
			c_t.display_data();
           break;
        case 4:
        c_t.get_data();
		c_t=c.subtract(c_t);
		c_t.display_data();
           break;
        case 5:
           mag=c.magnitude(c);
			c_t.display_data(mag);
           break;
        case 6:
           c_t=c.conjugate(c);
			c_t.display_data();
           break;
        case 7:
        cout<<"program Ended";  
           break;
       default:
        cout<<"iNvAlId ChOiCe";
           break;
       }


   }
}
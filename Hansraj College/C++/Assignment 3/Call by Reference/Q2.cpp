//Input three numbers and print the largest of the three.
#include <iostream>
using namespace std;
void largest(int,int,int,int&);
int main()
{
	int n1,n2,n3,l=0;
	cout << "Enter 3 Numbers" << endl;
	cin>>n1>>n2>>n3;	
	cout<<"Output : ";
	largest(n1,n2,n3,l);
	cout<< l << " is the Largest Number";
  	return 0;
}

void largest(int n1,int n2,int n3,int&l)
{
    if(n1 >= n2 && n1 >= n3)
    l=n1;
    else if(n2 > n3)
    l=n2;
    else
    l=n3;  
}


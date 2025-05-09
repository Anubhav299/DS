#include <iostream>
#include <stdlib.h>
using namespace std;
void calsumofd();

int main()
{
int ch;
while (ch!=3)
{
	system("clear");
cout<<endl<<"1. Sum of Digits";
cout<<endl<<"2. Message 2";
cout<<endl<<"3. Exit";
cout<<endl<<"Enter choice (3 to exit)";
cin>>ch;

switch(ch)
{
  case 1:
        calsumofd();
        break;
  case 2:
      cout<<"Good Afternoon";
      break;
  case 3:
      cout<<"Bye!!";
      break;
  default:
      cout<<"Invalid choice!";
      break;
}
}
return 0;

}

void calsumofd()
{
  int num;
  int sumofd=0;

  cout<<"Enter a number";
  cin>>num;
  int r=0;
  while (num!=0)
  {
    r=num%10;
    sumofd=sumofd+r;
    num=num/10;
  }
  cout<<endl<<"sum of digits is: "<<sumofd;
}

#include <fstream> //for file I/O
#include <iostream>
#include <string.h>
using namespace std;

void countv(char str[20])
{
    int i=0, cnt=0;
    while(str[i])
    {if (str[i]=='a' || str[i]=='e' || str[i]=='i' ||str[i]=='o' ||str[i]=='u' ) 
    cnt++;
    i++;}
    cout<<"Number of vowels = "<< cnt<<endl;
}
int main()
{
char str1[20];
 cout<<"Enter a string";
cin.getline(str1,20);
   
ofstream outfile("fileQ.txt");

while(strcmp(str1,"0"))
{
    outfile<<str1<<endl;
    cout<<"Enter a string";
//cin>>str1;
   cin.getline(str1,20);

}


cout<<"File written";
outfile.close();
ifstream infile("fileQ.txt"); 
cout<<"\n Content of the file is \n";
char buffer[80]; //character buffer
while( !infile.eof() ) //until end-of-file
{
infile.getline(buffer, 80); //read a line of text
cout << buffer<<endl;
countv(buffer);  

//display it
}

return 0;
}

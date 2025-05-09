#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char name[20];
	cin.getline(name,20);
	ifstream infile("file1.txt");
	infile>>name;
	ofstream outfile("file1.txt");
	outfile<<name;
	outfile.close();
}

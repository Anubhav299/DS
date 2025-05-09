#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

void count(char line[30])
{
    int i=0,test=0;
    int blank=0,lower=0,upper=0,vowel=0,consonants=0,digits=0,special=0;
    while(line[i])
	{
            test=int(line[i]);
            if (test==32)
			{
                blank++;
            }
            else if (test>96 && test<123)
			{
                lower++;
                if (test==97 || test==101 || test==105 || test==111 || test==117)
				{
                    vowel++;
                }
                else
				{
                    consonants++;
                }
            }
            else if (test>64 && test<91)
            {
                upper++;
                if (test==65 || test==69 || test==73 || test==79 || test==85)
				{
                    vowel++;
                }
                else
				{
                    consonants++;
                }
            }
            else if (test>48 && test<58)
			{
                digits++;
            }
            else
			{
                special++;
            }
            i++;
    }
    cout<<"Number of Blanks: "<<blank<<endl;
    cout<<"Number of Lower Alphabets: "<<lower<<endl;
    cout<<"Number of Upper Alphabets: "<<upper<<endl;
    cout<<"Number of Vowels: "<<vowel<<endl;
    cout<<"Number of Consonants: "<<consonants<<endl;
    cout<<"Number of Digits: "<<digits<<endl;
    cout<<"Number of Special Characters: "<<special<<endl;
}

int main()
{
    char line[30];
    cout<<"Enter '0' to stop writing lines."<<endl;
    cout<<"Enter the line(character limit is 30): "<<endl;
    cin.getline(line,30);
    ofstream outfile("TestFile.txt");
    do
	{
        outfile<<line;
        cin.getline(line,30);
        outfile<<"\n";
    }
	while(strcmp(line,"0"));
    outfile.close();
    
    ifstream infile("TestFile.txt");
    
    
    while (!infile.eof())
	{
        infile.getline(line,30);
        cout<<"line is: "<<line<<endl;
        count(line);
        cout<<endl;
    }
    infile.close();
}

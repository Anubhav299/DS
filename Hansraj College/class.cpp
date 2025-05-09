#include <iostream>
using namespace std;
unsigned int members;
class person
{   int age;
    char name[20];
 	public:
 		person()
 		{}
 		person(int age)
 		{
     		age=20;
 		}
		void get_data()
		{
    		cout<<"Enter the name of the person: \n";
    		cin>>name;
    		cout<<"Enter the age of the person: \n";
    		cin>>age;
		}
		void display_data()
		{
    		cout<<"The name of the person is: "<<name<<endl;
    		cout<<"the age of the person is:"<<age<<endl;
		}
		~person()
    	{
   			cout<<"\n"<<"I am a distructor";
   		};
};
int main()
{
    cout<<"Enter the Number of People : ";
    cin>>members;
    person p[members];
    for (int i=0;i<members;i++)
    {
        p[i].get_data();
    }
    for(int j=0;j<members;j++)
	{
        p[j].display_data();
    }
    person q=p[members];
    cout<<"The copy constructor is";
    for(int k=0;k=members;k++)
    {
       q.display_data();
    }
}

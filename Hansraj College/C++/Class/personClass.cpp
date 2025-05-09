#include<iostream>
#include<cstring>
using namespace std;
 class Person
 {
    int age;
    char name[20];
    public:
    	void get_data()
		{
        cout<<"Enter age: ";
        cin>>age;
        cout<<"Enter name: ";
        cin>>name;
    	};
    	void display_data()
		{
        cout<<"Age: "<<age;
        cout<<"\nName: "<<name<<"\n";
    	};
    	Person()
		{
        age=0;
        strcpy(name,"null");
    	};
    	Person(int ag)
		{
        age=ag;
        strcpy(name,"null");
    	};
    	//copy constructor
    	Person(const Person &p)
		{
        age=p.age;
        strcpy(name,p.name);
    	};
    	//destructor
		~Person()
		{
			cout<<"Destructor"<<endl;
		}
	
};
int main()
{
    Person P1;
    P1.get_data();
    P1.display_data();

    Person P2(P1);
    P2.display_data();
}

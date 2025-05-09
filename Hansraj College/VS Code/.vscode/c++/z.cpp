#include <iostream>
#include<cstdlib>
using namespace std;

struct node 
{
    int data;
    struct node* link; 
};

struct node* add_node(struct node* head, int val)
{ 
	struct node* temp;
	struct node* newNode = (struct node *)malloc(sizeof(struct node));
	newNode->data = val;
	newNode->link = NULL;
	
	newNode->link = head;
	head = newNode;
	return head;
}

struct node* createLL(struct node* head, int n)
{
	while(n!=0)
	{
		head = add_node(head, n%10);
		n=n/10;
	}
	return head;
}

void print(struct node* head)
{
	struct node* temp = head;
	if(head == NULL)
	{
		cout<<"No Number.";
	}
	else
	{
		while(temp->link != NULL)
		{
			cout<<" -> ",temp->data;
			temp=temp->link;
		}
		cout<<(temp->data);
		}
	}

int main()
{
	int a,b;
	cout<<("Enter the two numbers ")<<endl;
	cin>>a;
	cin>>b;
	
	cout<<"Representation of 1st Number"<<endl;
	struct node* head1 = NULL;
	head1 = createLL(head1,a);
	print(head1);
	
	struct node* head2 = NULL;
	cout<<endl<<"Representation of 2nd Number"<<endl;
	head2 = createLL(head2,b);
	print(head2);
	
	return 0;
}

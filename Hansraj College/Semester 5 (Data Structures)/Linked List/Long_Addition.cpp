// C++ program to Convert a String
// to a Singly Linked List

#include<bits/stdc++.h>

using namespace std;

// Structure for a Singly Linked List
struct node 
{
	int data;
	node* link;
};

// Function to add a new node to the Linked List

struct node* push(struct node* head, int val)
{
	struct node* newP = new node;
	newP->data = val;
	newP->link = head;
	head = newP;
	return head;
}

// Function to print the data present in all the nodes
void print(node* head)
{
	node* curr = head;
	while (curr != NULL) {
		cout << curr->data <<"  ";
		curr = curr->link;
	}
}

struct node* createLL(struct node* head, int n)
{
	while(n!=0)
	{
		head=push(head, n%10);
		n=n/10;
	}
	return head;
}

void back2num(struct node* head)
{
	struct node* temp = head;
	cout<<("\nResult = ");
	while(temp)
	{
		cout<<temp->data;;
		temp = temp->link;
	}
	return;
}


struct node* reverse(struct node *head)
{
    struct node*prev = NULL;
    struct node*next = NULL;
    while(head != NULL)
    {
        next = head->link;
        head->link = prev;
        prev = head;
        head = next;
    }
    head = prev;
    return head;

}

struct node* addition(struct node* head1, struct node* head2)
{
	if(head1->data==0)
		return head2;
	if(head2->data==0)
		return head1;

	struct node* ptr1 = head1;
	struct node* ptr2 = head2;
	struct node* head3 = NULL;
	int carry = 0, sum;

	while (ptr1 || ptr2)
	{
		sum=0;
		if(ptr1)
			sum += ptr1->data;
		if(ptr2)
			sum += ptr2->data;
		sum += carry;

		carry=sum/10;
		sum%=10;

		head3 = push(head3, sum);

		if(ptr1)
			ptr1 = ptr1->link;
		if(ptr2)
			ptr2 = ptr2->link;
	}
	if(carry)
		head3 = push(head3, carry);
	return head3;
}
	

int main()
{
	int a,b;
	cout<<endl<<"Enter First Number - ";
	cin>>a;
	cout<<endl<<"Enter Second Number - ";
	cin>>b;

	cout<<"Representation of 1st Number : ";

	struct node* head1 = NULL;
	head1 = createLL(head1,a);
	print(head1);

	cout<<endl<<"Representation of 2nd Number : ";
	struct node* head2 = NULL;
	head2 = createLL(head2,b);
	print(head2);

	head1=reverse(head1);
	head2=reverse(head2);

	struct node* head3 = NULL;
	head3=addition(head1,head2);
	cout<<endl<<"After Addition : ";
	print(head3);

	back2num(head3);
	return 0;
}
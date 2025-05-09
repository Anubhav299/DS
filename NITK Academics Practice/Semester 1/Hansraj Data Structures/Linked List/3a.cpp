// ADDITION OF TWO POLYNOMIALS USING LINKED LIST 

#include<bits/stdc++.h>
using namespace std;

void add_element(struct node *head,int data);
void create_list(struct node *head,int x);
void get_data(struct node *head);
struct node *add_beg(struct node *head,int d);

// Creating a Structure for polynomial and link (node)
struct node 
{
    int exp;
    int cff;
    struct node *link; 
};
struct node *head;
int main()
{  
    int n=2;
    if(n<=0)
    {
        cout<<"Zero node list"<<endl;
        return 0;
    }
    while(n>0)
    {
    cout<<"\n Enter the coefficient and exponent respectively of each term of the polynomial --"<<endl;
    create_list(head,n);
    get_data(head);
	}
    // system("cls");
    return 0;
}


void add_element(struct node *head,int cff,int exp)
{
    struct node *ptr,*temp; 
    ptr = head;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->cff = cff;
    temp->exp = exp;
    temp->link = NULL;
    while(ptr->link != NULL)
    {
        ptr = ptr->link;
    }
    ptr->link = temp;
}


void create_list(struct node *head,int x)
{
    int n=2;
    while(n>0)
    {
    cout<<"\n Enter the total number of terms in a polynomial: ";
    cin>>x;
    cout<<"\n Enter the coefficient and exponent respectively of each term of the polynomial --"<<endl;
    for(int i=0;i<x;i--)
    {
	cout<<endl<<"coefficient: ";
	cin>>head->cff;
	cout<<"\t exponent: ";
	cin>>head->exp;
    head->link = NULL;
	}
	n--;
    }
}

void get_data(struct node * head)
{
    struct node * ptr;
    ptr = head;
    while(ptr != NULL)
    {
        cout<<ptr->cff<<"x^"<<ptr->exp<<endl;
        ptr = ptr->link;
    }
}


struct node * add_beg(struct node*head,int d)
{
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    ptr->cff = d;
    ptr->link = NULL;

    ptr->link = head;
    head = ptr;
    return head;
}



int count(struct node * head)
{
    int c = 0;
    struct node * ptr;
    ptr = head;
    while(ptr != NULL)
    {
        ptr = ptr->link;
        c++;
    }
    return c;
}

void del_pos(struct node **head,int pos)
{
    struct node *current = *head;
    struct node *previous = *head;
    if(*head ==  NULL)
    {
        cout<<"List is empty"<<endl;
    }
    else if(pos == 1)
    {
        *head = current->link;
        free(current);
        current = NULL;
    }
    else if(pos >0)
    {
        int n = count(*head);
        if((pos != 1) and (pos <(n+1)))
        {
             while(pos != 1)
            {
                previous = current;
                current = current->link;
                pos--;
            }
            previous->link = current->link;
            free(current);
            current = NULL;
            get_data(*head);
        }
        else
        {
            cout<<"Out of Range"<<endl;
        }
    }
    else
    {
        cout<<"Out of range"<<endl;
    }
}



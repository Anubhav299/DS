#include<bits/stdc++.h>
using namespace std;

struct node 
{
    int data;
    struct node *link; 
};


void create_list(struct node *head,int x);
void add_element(struct node *head,int data);
void get_data(struct node * head);
struct node* reverse(struct node *head);


int main()
{
    int n;
    cout<<"Enter the number of nodes you want to create--"<<endl;
    cin>>n;
    struct node *head = (struct node*)malloc(sizeof(struct node));
    create_list(head,n);

    //////////////////// To reverse list ////////////////////
    head = reverse(head);
    get_data(head);

    return 0;
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


void add_element(struct node *head,int data)
{
    struct node *ptr,*temp; 
    ptr = head;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;
    while(ptr->link != NULL)
    {
        ptr = ptr->link;
    }
    ptr->link = temp;
}


void create_list(struct node *head,int x)
{
    int k = 1;
    
    cout<<endl<<"Enter node "<<k<<" data value - ",cin>>head->data;
    head->link = NULL;
    for(int i = 0;i<x-1;i++)
    {
        int p;
        k++;
        cout<<"Enter node "<<k<<" data value - ",cin>>p;
        add_element(head,p);
    }  

   
}


void get_data(struct node * head)
{
    struct node * ptr;
    ptr = head;
    while(ptr != NULL)
    {
        cout<<" Value is "<<ptr->data<<endl;
        ptr = ptr->link;
    }
}
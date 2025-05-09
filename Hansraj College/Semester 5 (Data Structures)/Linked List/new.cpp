#include<bits/stdc++.h>
using namespace std;

struct node 
{
    struct node * prev;
    int data;
    struct node * next;
};

struct node* add(struct node* head,int data);



void display_for(struct node * head)
{
    struct node* ptr;
    ptr = head;
    while(ptr != NULL)
    {
        cout<<"Value is "<<ptr->data<<endl;
        ptr = ptr->next;
    }
}

void print(int n)
{
    for(int i  = 0;i<n;i++)
    {
        cout<<i<<endl;
    }
}

int main()
{  

    struct node * head = (struct node* )malloc(sizeof(struct node));
    head->prev = NULL;
    head->data = 34;
    head->next = NULL;
    struct node * temp = (struct node* )malloc(sizeof(struct node));
    temp->prev = head;
    temp->data = 45;
    temp->next = NULL;
    head->next = temp;

    head = add(head,6);
    head = add(head,78);
    display_for(head);
    return 0;
}









struct node* add(struct node* head,int data)
{
    struct node *ptr;
    struct node* temp = (struct node *)malloc(sizeof(struct node *));
    temp->next = NULL;
    temp->data = data;
    temp->prev = NULL;
    ptr = head;
    while(ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = temp;
    temp->prev = ptr;
    return head;
}
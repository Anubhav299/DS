#include<bits/stdc++.h>
using namespace std;

int count_dig(long long int);

struct node
{
    int data;
    struct node*link;
};

void create_list(struct node *head,int x);
void get_data(struct node * head);
struct node * add_beg(struct node*head,int d);
int main()
{
    int d=0;
    long long int i;
    cout<<"Enter your Number."<<endl;
    cin>>i;
    struct node *head = (struct node*)malloc(sizeof(struct node));
    head->data=0;
    cout<<i<<endl;
    cout<<"Number"<<count_dig(i)<<endl;
    int k=0,p=0;
    while(i!=0)
    {
        ++p;
        k=i%10000;
        if(p==1)
        {
            head->data=k;
            head->link = NULL;
        }
        else
        {
            head=add_beg(head,k);
        }
        cout<<k<<endl;
        i/=10000;
    }
     get_data(head);
    // int z=count_dig(i);
    // cout<<z;
}

struct node * add_beg(struct node*head,int d)
{
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data = d;
    ptr->link = NULL;

    ptr->link = head;
    head = ptr;
    return head;
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





int count_dig(long long int x)
{
    int d=0;
    while(x!=0)
    {
        ++d;
        x/=10;
    }
    return d;
}
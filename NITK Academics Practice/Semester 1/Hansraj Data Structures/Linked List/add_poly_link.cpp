#include<bits/stdc++.h>
using namespace std;

struct node
{
    int coeff;
    int exp;
    struct node *link;
};


void add_node(struct node *head,int cof,int ex)
{
    struct node *ptr,*temp; 
    ptr = head;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->coeff = cof;
    temp->exp = ex;
    temp->link = NULL;
    while(ptr->link != NULL)
    {
        ptr = ptr->link;
    }
    ptr->link = temp;
}


void create_list(struct node *head,int x)
{
    int k = 1,max = 0;
    cout<<endl<<"Enter node "<<k<<" coeff value - ";
    cin>>head->coeff;
    cout<<"exponent value - ";
    cin>>head->exp;
    head->link = NULL;
    max = head->exp;
    for(int i = 0;i<x-1;i++)
    {
        int p,q;
        k++;
        cout<<endl<<"Enter node "<<k<<" coeff value - ";
        cin>>p;
        cout<<"Exponent value - ";
        cin>>q;

        while((q>=max) or (q<-1)) 
        {
            cout<<endl<<" INVALID !!!"<<endl;
            cout<<"Exponent value - ";
            cin>>q;
            if (q == 0)
            {
                break;
            }
        }
        max = q;
        add_node(head,p,q);
        if(q == 0)
        {
            break;
        }
    }    
}


void get_data(struct node * head,int n)
{
    struct node * ptr;
    ptr = head;
    while(ptr != NULL)
    {
        cout<<ptr->coeff<<"x^"<<ptr->exp;
        if (ptr->link == NULL)
        {
            cout<<" ";
        }
        else
        {
            cout<<" + ";
        }
        ptr = ptr->link;
    }
    cout<<endl;
    cout<<"**********************************************"<<endl;
}

int count(struct node * head)
{
    int c= 0 ;
    struct node * ptr;
    ptr = head;
    cout<<"Coeff  "<<" expo"<<endl;
    while(ptr != NULL)
    {
        ptr = ptr->link;
        c++;
    }
    return c;
}



int main()
{  
    int n,m;
    cout<<"Enter the terms in polynomial 1-- ";
    cin>>n;
    struct node *head = (struct node*)malloc(sizeof(struct node));
    create_list(head,n);
    cout<<"Poly 1 "<<endl;
    get_data(head,n);

    cout<<endl<<"Enter the terms in polynomial 2-- ";
    cin>>m;
    struct node *head2 = (struct node*)malloc(sizeof(struct node));
    create_list(head2,m);
    cout<<"Poly 2 "<<endl;
    get_data(head2,m);
    return 0;
}
///////////////////////////////////////////// LINKED LIST //////////////////////////////////////////
#include<bits/stdc++.h>

using namespace std;

void del_pos(struct node **head,int pos);
void add_element(struct node *head,int data);
void create_list(struct node *head,int x);
void get_data(struct node * head);
struct node * add_beg(struct node*head,int d);
int count(struct node * head);
void add_pos(struct node * head,int data,int pos);
int search(struct node * head,int d);
void del_pos(struct node **head,int pos);


// Creating a Structure for data and link (node)
struct node 
{
    int data;
    struct node *link; 
};

int main()
{  
    int n;
    cout<<"Enter the number of nodes you want to create--"<<endl;
    cin>>n;
    if(n<=0)
    {
        cout<<"Zero node list"<<endl;
        return 0;
    }
    else
    {
        struct node *head = (struct node*)malloc(sizeof(struct node));
        create_list(head,n);

        cout<<endl;
        int ch;
        while(ch!= 8)
        {
            cout<<"1. Display list values"<<endl;
            cout<<"2. Add element at end"<<endl;
            cout<<"3. Add element at first"<<endl;
            cout<<"4. Add element at desired position other than (1)"<<endl;
            cout<<"5. Deletion of node"<<endl;
            cout<<"6. Counting number of nodes"<<endl;
            cout<<"7. Search for an element"<<endl;
            cout<<"8. Exit"<<endl;
            cout<<"Enter your Choice "<<endl,cin>>ch;
            switch(ch)
            {
                case 1:
                {
                    get_data(head);
                    break;
                }
                case 2:
                {
                    int t;
                    cout<<"Enter the data value-- ",cin>>t;
                    add_element(head,t);
                    get_data(head);
                    break;
                }
                case 3:
                {
                    int t;
                    cout<<"Enter the data value-- ",cin>>t;
                    head = add_beg(head,t);
                    get_data(head);
                    break;
                }
                case 4:
                {
                    int f,pos;
                    cout<<"Enter the data -- ",cin>>f;
                    cout<<"Enter the position -- ",cin>>pos;
                    add_pos(head,f,pos);
                    
                    break;
                }
                case 5:
                {
                    int p;
                    cout<<"Enter the position to be deleted -- ",cin>>p;
                    del_pos(&head,p);
                    break;
                }
                case 6:
                {
                    int y = count(head);
                    cout<<"Number of nodes "<<y<<endl;
                    break;
                }
                case 7:
                {
                    int q,r;
                    cout<<"Enter the elment to be searched -- ",cin>>q;
                    r = search(head,q);
                    if(r == 1)
                    {
                        cout<<"Element "<<q<<" is present in list"<<endl;
                    }
                    else
                    {
                        cout<<"Not found !!!!"<<endl;
                    }
                    break;
                }
                case 8:
                    cout<<"END....... !!!!";
                    break;
                default:
                    cout<<"Invalid Choice";
                    break;
            }
            cout<<"\n"<<endl;
            system("pause");
            system("cls");
        }
        return 0;
    }
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


struct node * add_beg(struct node*head,int d)
{
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data = d;
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


void add_pos(struct node * head,int data,int pos)
{
    struct node* ptr = head;
    struct node * ptr2 = (struct node*)malloc(sizeof(struct node));
    ptr2->data = data;
    ptr2->link = NULL;
    pos--;
    int n = count(head);
    if((pos > 0) and (pos <=n))
    {
        while(pos != 1)
        {
            ptr = ptr->link;
            pos--;
        }
        ptr2->link = ptr->link;
        ptr->link = ptr2;
        get_data(head);
    }
    else
    {
        cout<<"Cannot be added in list"<<endl;
    }
}



int search(struct node * head,int d)
{
    int r = 0;
    struct node * ptr;
    ptr = head;
    while(ptr != NULL)
    {
        if(ptr->data  == d)
        {
            return r = 1;
        }
        ptr = ptr->link;      
    }
    return 0;
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

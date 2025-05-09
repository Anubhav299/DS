#include<iostream>
using namespace std;
 
struct node
{
    int data;
    struct node* link;
 
    node(int d)
    {
        data = d;
        link = NULL;
    }
};
 
 
class Mystack
{
    struct node* head;
    int size;
 
    public:
    Mystack()
    {
        head = NULL;
        size = 0;
    }
 
    void push(int d)
    {
        node* temp = new node(d);
        temp->link = head;
        head = temp;
        cout<<"Element pushed "<<head->data<<endl;
        size++;
    }
    void pop()
    {
        if(head  == NULL)
        {
            cout<<"Stack is empty "<<endl;
        }
        node* temp = head;
        head = head->link;
        delete temp;
        cout<<"Element  is Popped"<<endl;
        size--;
    }
 
    int top()
    {
        if(head  == NULL)
        {
            cout<<"Stack is empty "<<endl;
            return -1;
        }
        return head->data;
    }
 
    int stacksize()
    {
        return size;
    }
 
    bool isempty()
    {
        if(head == NULL)
        {
            return true;
        }    
        return false;
    }
 
    int peek(int y)
    {
        if(y-1>size)
        {
            cout<<"Peek index is out of range"<<endl; 
            return -1;
        }
        struct node *ptr = head;
        for(int i = 0;i<=size;i++)
        {
            if(i == y-1)
            {
                return ptr->data;
            }
            ptr = ptr->link;
        }
 
    }
    void display()
    {
        struct node*ptr;
        ptr = head;
        cout<<"Stack is"<<endl;
        while(ptr!= NULL)
        {
            cout<<ptr->data<<" ";
            ptr = ptr->link;
        }
    }
 
};
 
int main()
{
    Mystack s;
    int ch;
    while(ch!= 8)
    {
        cout<<"1. Push peration"<<endl;
        cout<<"2. Pop operation"<<endl;
        cout<<"3. Top operation"<<endl;
        cout<<"4. Peek operation"<<endl;
        cout<<"5. Display opertaion"<<endl;
        cout<<"6. Check for empty stack"<<endl;
        cout<<"7. Size of stack"<<endl;
        cout<<"8. Exit"<<endl;
        cout<<endl<<"Enter the operation you want to perform"<<endl,cin>>ch;
        cout<<endl;
        switch(ch)
        {
            case 1:
            {
                int x;
                cout<<"Enter the number you want to push into stack "<<endl,cin>>x;
                s.push(x);
                break;
            }
            case 2:
            {
                s.pop();
                s.display();
                break;
            }
            case 3:
            {
                cout<<"Element at top is "<<s.top()<<endl;
                break;
            }
            case 4:
            {
                int r;
                cout<<"Enter the index which you want to peek "<<endl,cin>>r;
                cout<<endl<<s.peek(r);
                break;
            }
            case 5:
            {
                s.display();
                break;
            }
            case 6:
            {
                cout<<s.isempty();
                break;
            }
            case 7:
            {
                cout<<"Size of stack is "<<s.stacksize();
                break;
            }
            case 8:
            {
                cout<<"END....... !!!!";
                break;
            }        
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

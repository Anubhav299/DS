#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;

    node(int x) : data(x), next(nullptr) {};
};

class Stack
{
    node *top;
    public:
        Stack()
        {
            top = nullptr;
        }

        bool isEmpty()
        {
            if(!top)
                return true;
            return false;
        }

        void push(int val)
        {
            node *newNode = new node(val);
            newNode->next = top;
            top = newNode;    
        }

        void pop()
        {
            if(isEmpty())
            {
                cout << "Stack Underflow."<<endl;
                return;
            }
            node *temp = top;
            top = top->next;
            delete temp;
        }

        int peek()
        {
            if(isEmpty())
            {
                cout << "Empty"<<endl;
                return -1;
            }
            return top->data;
        }
        void display()
        {
            node *temp = top;
            while(temp)
            {
                cout << temp->data << endl;
                temp = temp->next;
            }
        }
};

int main()
{
    Stack s;
    // s.push(10);
    // s.push(20);
    // s.push(30);
    // s.display();
    // cout << endl;
    s.pop();
    cout<<s.peek();
}
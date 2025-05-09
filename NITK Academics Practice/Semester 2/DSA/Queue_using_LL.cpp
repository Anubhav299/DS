#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;

    node(int x) : data(x), next(nullptr) {};
};

class Queue
{
    node *front;
    node *rear;
    public:
        Queue()
        {
            front = nullptr;
            rear = nullptr;
        }

        bool isEmpty()
        {
            if(front == NULL)
                return true;
            return false;
        }

        void enqueue(int x)
        {
            node *newNode = new node(x);
            if(rear == nullptr)
            {
                front = rear = newNode;
                return;
            }
            rear->next = newNode;
            rear = newNode;
        }

        void dequeue()
        {
            if(isEmpty())
            {
                cout << "Empty";
                return;
            }
            node *temp = front;
            front = front->next;
            if(front == nullptr)
            {
                rear = nullptr;
            }
            delete temp;
        }

        int frontele()
        {
            if(isEmpty())
            {
                cout << "Nope";
                return -1;
            }
            return front->data;
        }

        void display()
        {
            node *temp = front;
            while(temp)
            {
                cout << temp->data << endl;
                temp = temp->next;
            }
        }
};

int main()
{
    Queue q;
    // q.enqueue(10);
    // q.enqueue(12);
    q.dequeue();
    q.dequeue();
    cout << q.frontele();
    q.display();
    return 0;
}
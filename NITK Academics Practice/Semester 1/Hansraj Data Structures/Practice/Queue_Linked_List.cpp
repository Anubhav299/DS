
#include <iostream>
using namespace std;

struct node {
	int data;
	node* next;
	node(int d)
	{
		data = d;
		next = NULL;
	}
};

class Queue 
{
	struct node *front;
    struct node *rear;
	
    public:
    Queue() 
    { 
        front = rear = NULL; 
    }

	void enQueue(int x)
	{
        // Create a new LL node
		node* temp = new node(x);

        // If queue is empty, then
        // new node is front and rear both
		if (rear == NULL) 
        {
			front = rear = temp;
			return;
		}

        // Add the new node at
        // the end of queue and change rear
		rear->next = temp;
		rear = temp;
	}

	void deQueue()
	{
        // If queue is empty, return NULL.
		if (front == NULL)
			return;

        // Store previous front and
        // move front one node ahead
		node* temp = front;
		front = front->next;

        // If front becomes NULL, then
        // change rear also as NULL
		if (front == NULL)
			rear = NULL;

		delete (temp);
	}

    bool isempty()
    {
        if(front == NULL && rear == NULL)
            return true;
        else
            return false;
    }

    void displayQueue()
    {
        if (isempty())
            cout<<"Queue is empty\n";
        else
        {
            node *ptr = front;
            while( ptr !=NULL)
            {
                cout<<ptr->data<<" ";
                ptr= ptr->next;
            }
        }
    }
};

int main()
{
    
	Queue q;
	int ch;
    while(ch!= 5)
    {
        cout<<"1. Enqueue Operation"<<endl;
        cout<<"2. Dequeue operation"<<endl;
        cout<<"3. Display opertaion"<<endl;
        cout<<"4. Check for empty queue"<<endl;
        cout<<"5. Exit"<<endl;
        cout<<endl<<"Enter the operation you want to perform"<<endl,cin>>ch;
        cout<<endl;
        switch(ch)
        {
            case 1:
            {
                int x;
                cout<<"Enter the number you want to enter in the queue "<<endl,cin>>x;
                q.enQueue(x);
                break;
            }
            case 2:
            {
                q.deQueue();
                q.displayQueue();
                break;
            }
            case 3:
            {
                q.displayQueue();
                break;
            }
            case 4:
            {
                if(q.isempty()==true)
                {
                    cout<<"Empty Queue.";
                }
                else
                {
                    cout<<"Queue is not Empty.";
                }
                break;
            }
            case 5:
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

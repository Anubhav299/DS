#include <iostream>
using namespace std;

class CircularQueue
{
    int *arr;
    int front, back, size;

public:
    CircularQueue(int n)
    {
        size = n;
        front = -1;
        back = -1;
        arr = new int[n];
    }
    void enQueue(int x)
    {
        if ((back + 1) % size == front)
        {
            cout << "queue overloaded !!" << endl;
            return;
        }
        if (front == -1)
        {
            front++;
        }
        back = (back + 1) % size;
        arr[back] = x;
    }
    void deQueue()
    {
        if (front == -1)
        {
            cout << "Queue is already empty" << endl;
            return;
        }
        if (front == back)
        {
            front = -1;
            back = -1;
            return;
        }
        else
        {
            front = (front + 1) % size;
        }
    }
    int peek()
    {
        if (front == -1)
        {
            cout << "Queue is already empty" << endl;
            return -1;
        }
        return arr[front];
    }
    bool empty()
    {
        if (front == -1)
        {
            return true;
        }
        return false;
    }
    bool full()
    {
        if ((back + 1) % size == front)
        {
            return true;
        }
        return false;
    }
    // void Display()
    // {
    //     for(int i =front;i<= back;i++)
    //     {
    //         cout<<"Value is "<<arr[i]<<endl;
    //     }
    // }

    void Display()
    {
        if (empty())
            cout << "\nQueue is empty\n"
                 << endl;
        else
        {
            cout << "Queue elements are : ";
            for (int i = front; i <= back; i = (i+1)%size)
                cout << arr[i] << " ";
            cout << endl;
        }
    }
};


int main()
{
    int n;
    cout << "Enter the max size of array " << endl, cin >> n;
    CircularQueue q(n);
    int ch;
    while (ch != 8)
    {
        cout<<"1. Enqueue Operation" << endl;
        cout<<"2. Dequeue operation" << endl;
        cout<<"3. Display operation" << endl;
        cout<<"4. Check for empty queue" << endl;
        cout<<"5. Show Queue Front" << endl;
        cout<<"6. Check for Full queue "<<endl;
        cout<<"7. Count elements in queue"<<endl;
        cout<<"8. Exit" << endl;
        cout<<endl<<"Enter the operation you want to perform"<<endl,cin >> ch;
        cout << endl;
        switch (ch)
        {
        case 1:
        {
            int x;
            cout << "Enter the number you want to enter in the queue " << endl, cin >> x;
            q.enQueue(x);
            break;
        }
        case 2:
        {
            q.deQueue();
            q.Display();
            break;
        }
        case 3:
        {
            q.Display();
            break;
        }
        case 4:
        {
            if (q.empty() == true)
            {
                cout << "Empty Queue.";
            }
            else
            {
                cout << "Queue is not Empty.";
            }
            break;
        }
        case 5:
        {
            //q.queueFront();
            break;
        }
        case 6:
        {
            if (q.full() == true)
            {
                cout << "Queue Full";
            }
            else
            {
                cout << "Queue is not Full";
            }
            break;
        }
        case 7:
        {
            // cout<<"Number of elements "<<q.count();
            break;
        }
        case 8:
        {
            cout << "END....... !!!!";
            break;
        }
        default:
            cout << "Invalid Choice";
            break;
        }
        cout << "\n"
             << endl;
        system("pause");
        system("cls");
    }
    return 0;
}






// int main(int argc, char const *argv[])
// {
//     CirculuarQueue queue(4);
//     queue.enQueue(1);
//     queue.enQueue(2);
//     queue.enQueue(2);
//     queue.enQueue(3);
//     cout << queue.peek() << " ";
//     queue.deQueue();
//     cout << queue.peek() << " ";
//     queue.deQueue();
//     queue.deQueue();
//     cout << queue.peek() << " ";
//     queue.deQueue();
//     queue.deQueue();
//     cout << queue.peek() << " ";
//     return 0;
// }
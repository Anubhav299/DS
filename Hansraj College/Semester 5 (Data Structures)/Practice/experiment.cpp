#include <iostream>
using namespace std;

class Queue
{
	int front, rear, capacity;
	int *queue;

public:
	Queue(int c)
	{
		front = rear = -1;
		capacity = c;
		queue = new int[c];
	}

	void Enqueue(int data)
	{
		// check queue is full or not
		if (rear == capacity - 1)
		{
			cout << "\nQueue is full\n";
			return;
		}

		// insert element at the rear
		else
		{
			queue[rear] = data;
			rear++;
		}
		return;
	}

	int Dequeue()
	{
		int value;
		if (isempty())
		{
			cout << "Queue is empty!!" << endl;
			return -1;
		}
		else
		{
			value = queue[front];
			if (front >= rear)
			{ // only one element in queue
				front = -1;
				rear = -1;
			}
			else
			{
				front++;
			}
			cout << endl
				 << "Deleted => " << value << " from queue" << endl;
			return (value);
		}
	}

	void Display()
	{
		if (isempty())
			cout << "\nQueue is empty\n"
				 << endl;
		else
		{
			cout << "Queue elements are : ";
			for (int i = front; i < rear; i++)
				cout << queue[i] << " ";
			cout << endl;
		}
	}

	void queueFront()
	{
		if (front == rear)
		{
			cout << "\nQueue is Empty\n";
			return;
		}
		cout << "\nFront Element is:", queue[front];
		return;
	}

	bool isempty()
	{
		if (front == -1 && rear == -1)
		{
			return true;
		}
		return false;
	}

};

int main()
{
	int n;
	cout << "Enter the max size of array " << endl, cin >> n;
	Queue q(n);
	int ch;
	while (ch != 5)
	{
		cout << "1. Enqueue Operation" << endl;
		cout << "2. Dequeue operation" << endl;
		cout << "3. Display operation" << endl;
		cout << "4. Check for empty queue" << endl;
		cout << "5. Show Queue Front" << endl;
		cout << "6. Exit" << endl;
		cout << endl
			 << "Enter the operation you want to perform" << endl,
			cin >> ch;
		cout << endl;
		switch (ch)
		{
		case 1:
		{
			int x;
			cout << "Enter the number you want to enter in the queue " << endl, cin >> x;
			q.Enqueue(x);
			break;
		}
		case 2:
		{
			q.Dequeue();
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
			if (q.isempty() == true)
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
			q.queueFront();
			break;
		}
		case 6:
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

// C++ program to implement a queue using an array
#include <iostream>
using namespace std;

class Queue
{
	int front, rear, capacity;
	int *queue;

public:
	Queue(int c)
	{
		front = rear = 0;
		capacity = c;
		queue = new int;
	}

	// function to insert an element
	void Enqueue(int data)
	{
		// check queue is full or not
		if (capacity == rear)
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

	// function to delete an element
	// from the front of the queue
	void Dequeue()
	{
		// if queue is empty
		if (front == rear)
		{
			cout << "\nQueue is empty\n";
			return;
		}

		// shift all the elements from index 2 till rear
		// to the left by one
		else
		{
			for (int i = 0; i < rear - 1; i++)
			{
				queue[i] = queue[i + 1];
			}

			// decrement rear
			rear--;
		}
		return;
	}

	// print queue elements
	void queueDisplay()
	{
		int i;
		if (front == rear)
		{
			cout << "\nQueue is Empty\n";
			return;
		}

		// traverse front to rear and print elements
		for (i = front; i < rear; i++)
		{
			cout << " %d <-- "<< queue[i];
		}
		return;
	}

	// print front of queue
	void queueFront()
	{
		if (front == rear)
		{
			cout << "\nQueue is Empty\n";
			return;
		}
		cout << "\nFront Element is: %d"<< queue[front];
		return;
	}
};

// Driver code
int main(void)
{
	// Create a queue of capacity 4
	Queue q(4);

	// print Queue elements
	q.queueDisplay();

	// inserting elements in the queue
	q.Enqueue(20);
	q.Enqueue(30);
	q.Enqueue(40);
	q.Enqueue(50);

	// print Queue elements
	q.queueDisplay();

	// insert element in the queue
	q.Enqueue(60);

	// print Queue elements
	q.queueDisplay();

	q.Dequeue();
	q.Dequeue();

	printf("\n\nafter two node deletion\n\n");

	// print Queue elements
	q.queueDisplay();

	// print front of the queue
	q.queueFront();

	return 0;
}

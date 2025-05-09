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
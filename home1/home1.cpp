#include <iostream>
#include "Queue.h"

using std::cout;
using std::endl;

/*
this Function initialize a queue with a specified capacity
Input: pointer to a Queue structure, queue size
Output: none
*/
void initQueue(Queue* q, unsigned int size)
{

	q->queue = new unsigned int[size];
	q->max = size;
	q->count = 0;
	q->arr_starter = 0;

}

void cleanQueue(Queue* q)
{

	delete[] q->queue;

}

bool isEmpty(Queue* s)
{

	if (s->count == 0)
	{

		return true;

	}
	else
	{

		return false;

	}

}

bool isFull(Queue* s)
{

	if (s->count == s->max)
	{

		return true;

	}
	else
	{

		return false;

	}

}

void enqueue(Queue* q, unsigned int newValue)
{

	if (!isFull(q))
	{

		q->queue[(q->arr_starter + q->count) % q->max] = newValue;
		q->count++;

	}

}

int dequeue(Queue* q)
{

	int nm_to_send = 0;

	if (isEmpty(q))
	{

		return -1;

	}
	else
	{

		nm_to_send = q->queue[q->arr_starter % q->max];
		q->queue[(q->arr_starter % q->max)] = NULL;
		q->arr_starter++;
		q->count--;
		return nm_to_send;

	}

}

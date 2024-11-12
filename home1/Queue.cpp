#include <iostream>
#include "Queue.h"


/*
this Function initialize a queue with a specified capacity
Input: pointer to a Queue structure, unsigned int queue size
Output: none
*/
void initQueue(Queue* q, unsigned int size)
{

	q->queue = new unsigned int[size];
	q->max = size;
	q->count = 0;
	q->arr_starter = 0;

}

/*
Function to clean up a queue
Input: pointer to a Queue structure
Output: none
*/
void cleanQueue(Queue* q)
{

	delete[] q->queue;

}

/*
Function to check if the queue is empty
Input: pointer to a Queue structure
Output: true if the queue is empty and false if not
*/
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

/*
Function to check if the queue is full
Input: pointer to a Queue structure
Output: true if the queue is full and false if not
*/
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

/*
Function to add a new element to the queue
Input: pointer to a Queue structure, value to add
Output: none
*/
void enqueue(Queue* q, unsigned int newValue)
{

	if (!isFull(q))
	{

		q->queue[(q->arr_starter + q->count) % q->max] = newValue;
		q->count++;

	}

}

/*
Function to remove an element from the queue
Input: pointer to a Queue structure
Output: the removed element, or -1 if the queue is empty
*/
int dequeue(Queue* q)
{

	int nm_to_send = 0;

	if (isEmpty(q))
	{

		return -1;

	}
	else
	{

		// Move arr_starter like a circle
		nm_to_send = q->queue[q->arr_starter % q->max];
		q->queue[(q->arr_starter % q->max)] = NULL;
		q->arr_starter++;
		q->count--;
		return nm_to_send;

	}

}

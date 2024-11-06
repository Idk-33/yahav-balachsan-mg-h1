#include <iostream>
#include "Queue.h"

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

}

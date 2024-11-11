#include <iostream>
#include "Queue.h"

using std::cout;
using std::endl;

void main()
{

	Queue* q = new Queue;

	initQueue(q, 5);

	cout << isEmpty(q) << endl;

	for (int i = 0; i < 5; i++)
	{
		enqueue(q, (i + 1) * (i + 1));
	}

	cout << isFull(q) << endl;

	while (!isEmpty(q))
	{
		cout << dequeue(q) << " ";
	}

	cleanQueue(q);

	delete q;

}
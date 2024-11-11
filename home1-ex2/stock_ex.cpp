#include <iostream>
#include "Stack.h"
#include "Utils.h"
using namespace std;

void initStack(Stack* s)
{

	s->haed = NULL;

}

void push(Stack* s, unsigned int element)
{

	s->haed = add_nm(s->haed, element);

}

int pop(Stack* s)
{

	unsigned int nm_to_send = 0;

	if (isEmpty(s))
	{

		return -1;

	}
	else
	{
		nm_to_send = s->haed->val;
		delet(s->haed);
		return nm_to_send;
	}

}

void cleanStack(Stack* s)
{
	linked_liste* current = NULL;
	linked_liste* next = NULL;

	current = s->haed;

	while (current != NULL)
	{

		next = current->next;
		delet(current);
		current = next;

	}

	s->haed = NULL;
}

bool isEmpty(Stack* s)
{

	return !s->haed;

}

bool isFull(Stack* s)
{

	return false; // stack cnot be full

}

void reverse(int* nums, unsigned int size)
{

	int i = 0;
	Stack* revers = new Stack;
	initStack(revers);

	for(i = 0; i < size; i++)
	{

		push(revers, nums[i]);
	
	}

	for (i = 0; i < size; i++)
	{

		nums[i] = pop(revers);

	}

}

int* reverse10()
{


	int* liste = new int[10];
	int i = 0;

	for (i = 0; i < 10; i++)
	{

		std:cout << "enter num to the list:";
		cin >> liste[i];

	}
	
	reverse(liste, 10);

	return liste;

}
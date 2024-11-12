#include <iostream>
#include "Stack.h"
#include "Utils.h"
using namespace std;

/*
Function to initialize a stack
Input: pointer to a Stack structure
Output: none
*/
void initStack(Stack* s)
{

	s->haed = NULL;

}

/*
Function to push a new element in to stack
Input: pointer to a Stack structure, element to be pushed
Output: none
*/
void push(Stack* s, unsigned int element)
{

	s->haed = add_nm(s->haed, element);

}

/*
Function to pop the top element from the stack
Input: pointer to a Stack structure
Output: the popped element, or -1 if the stack is empty
*/
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
		delet(&(s->haed));
		return nm_to_send;

	}

}

/*
Function to deleting all nodes
Input: pointer to a Stack structure
Output: none
*/
void cleanStack(Stack* s)
{
	linked_liste* current = NULL;
	linked_liste* next = NULL;

	current = s->haed;

	while (current != NULL)
	{

		next = current->next;
		delet(&(current));
		current = next;

	}

	s->haed = NULL;
}

/*
Function to check if the stack is empty
Input: pointer to a Stack structure
Output: true if the stack is empty and false if not
*/
bool isEmpty(Stack* s)
{

	return !s->haed;

}

/*
Function to check if the stack is full
Input: pointer to a Stack structure
Output: false
*/
bool isFull(Stack* s)
{

	return false; // stack cannot be full

}

/*
Function to reverse an array
Input: pointer to an array of integers, size of the array
Output: none
*/
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

/*
Function to create an array of 10 integers and reverse
Input: none
Output: pointer to the array
*/
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
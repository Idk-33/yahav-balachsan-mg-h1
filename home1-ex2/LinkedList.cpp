#include <iostream>
#include "LinkedList.h"


nm_stack* add_nm(nm_stack* stack, int nm)
{

	nm_stack* node = new nm_stack;
	node->val = nm;
	node->next = stack;

	return node;
	
}

void delet(nm_stack* stack)
{

	nm_stack* node_to_delet = NULL;

	node_to_delet = stack;
	stack = stack->next;

	delete(node_to_delet);


}
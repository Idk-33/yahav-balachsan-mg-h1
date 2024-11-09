#include <iostream>
#include "LinkedList.h"


nm_stack* add_nm(nm_stack* stack, int nm)
{

	nm_stack* node = new nm_stack;
	node->val = nm;
	node->next = stack;

}
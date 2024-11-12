#include <iostream>
#include "LinkedList.h"



linked_liste* add_nm(linked_liste* hade, unsigned int nm)
{

	linked_liste* node = new linked_liste;
	node->val = nm;
	node->next = hade;

	return node;
	
}

void delet(linked_liste** hade)
{

	linked_liste* node_to_delet = NULL;

	node_to_delet = *hade;
	*hade = (*hade)->next;

	delete(node_to_delet);

}
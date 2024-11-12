#include <iostream>
#include "LinkedList.h"


/*
Function to add a new node to the front of the linked list
Input: pointer to the head of the linked list, value to add
Output: pointer to the new head of the linked list
*/
linked_liste* add_nm(linked_liste* hade, unsigned int nm)
{

	linked_liste* node = new linked_liste;
	node->val = nm;
	node->next = hade;

	return node;
	
}

/*
Function to delete the first node in the linked list
Input: pointer to the head of the linked list
Output: none
*/
void delet(linked_liste** hade)
{

	linked_liste* node_to_delet = NULL;

	node_to_delet = *hade;
	*hade = (*hade)->next;

	delete(node_to_delet);

}
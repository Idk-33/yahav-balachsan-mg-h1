#ifndef LINKEDLIST_H
#define LINKEDLIST_H


typedef struct linked_liste
{

	unsigned int val;
	struct linked_liste* next;

} linked_liste;

linked_liste* add_nm(linked_liste* hade, unsigned int nm);

void delet(linked_liste* hade);


#endif
#include "push_swap.h"
void swap(Node **listInit)
{
	int temp;
	Node *aux;
	if (get_list_size(listInit) < 2)
		return;
	aux = *listInit;
	
	temp = aux->value;
	aux->value = aux->next->value; 
	aux->next->value = temp;
}
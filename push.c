#include "push_swap.h"

void push(Node **list, Node **listB)
{
	Node *aux;
	aux = *list;
	if (!*list)
		return;
	remove_front(list);
	add_front(listB, aux->value);
}

#include "push_swap.h"
#include "list_utils/add_back.c"
#include "list_utils/remove_front.c"


void rotate(Node **listInit)
{
	Node *aux;
	int first;
	int last;
	aux = *listInit;
	remove_front(listInit);
	add_back(listInit, aux->value);
}
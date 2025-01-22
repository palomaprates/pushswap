#include "push_swap.h"

void rotate(Node **listInit)
{
	Node *aux;
	int first;
	int last;
	aux = *listInit;
	remove_front(listInit);
	add_back(listInit, aux->value);
}
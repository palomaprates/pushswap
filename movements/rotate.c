#include "../push_swap.h"

void rotate(Node **listInit, char c)
{
	Node *aux;
	int first;
	int last;
	aux = *listInit;
	remove_front(listInit);
	add_back(listInit, aux->value, aux->index);
	write(1, "r", 1);
	write(1, &c, 1);
	write(1, "\n", 1);
}
#include "../push_swap.h"

void push(Node **list, Node **listB, char c)
{
	Node *aux;
	aux = *list;
	if (!*list)
		return;
	remove_front(list);
	add_front(listB, aux->value, aux->index);
	write(1, "p", 1);
	write(1, &c, 1);
	write(1, "\n", 1);
}

#include "../push_swap.h"

void	rotate(Node **listInit, char c)
{
	Node	*aux;

	aux = *listInit;
	add_back(listInit, aux->value, aux->index);
	remove_front(listInit);
	write(1, "r", 1);
	write(1, &c, 1);
	write(1, "\n", 1);
}

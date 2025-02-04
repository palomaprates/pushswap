#include "../push_swap.h"

void	sort_list(Node **list_a, int size, int binary)
{
	int j;
	int bit;
	int index;
	Node *aux;
	Node *list_b;

	j = -1;
	aux = *list_a;
	list_b = NULL;
	while (++j < size)
	{
		index = aux->index;
		bit = (index >> binary) & 1;
		if (bit == 0)
			push(list_a, &list_b, 'a');
		if (bit == 1)
			rotate(list_a, 'a');
		aux = aux->next;
	}
	push_all(&list_b, list_a, 'b');
}
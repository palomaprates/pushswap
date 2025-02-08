#include "../push_swap.h"

void	sort_list(Node **list_a, int size, int binary)
{
	int	i;
	int	bit;
	int	index;
	Node	*aux;
	Node	*list_b;

	i = -1;
	aux = *list_a;
	list_b = NULL;
	while (++i < size)
	{
		aux = *list_a;
		if (!aux)
			break;
		index = aux->index;
		bit = (index >> binary) & 1;
		if (bit == 0)
			push(list_a, &list_b, 'b');
		if (bit == 1)
			rotate(list_a, 'a');
	}
	push_all(&list_b, list_a, 'a');
}

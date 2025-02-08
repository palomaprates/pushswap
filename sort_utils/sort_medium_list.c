#include "../push_swap.h"

int	sort_medium_list(Node **list, Node **list_b, int size)
{
	Node	*aux;
	int	less;
	
	aux = *list;
	less = 0;
	while (size > 2)
	{
		if (aux->index == less)
		{
			push(list, list_b, 'b');
			less++;
			size--;
		}
		else
		{
			if (get_node_index(*list, size - 1) == less || \
				get_node_index(*list, size - 2) == less)
						reverse_rotate(list, 'a');
			else
				rotate(list, 'a');
		}
		aux = *list;
	}
	return (aux->index);
}

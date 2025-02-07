#include "push_swap.h"

void	sort_medium_stack(Node **list)
{
	Node *list_b;
	Node *aux;
	int	size;
	int less;
	int last_index;

	list_b = NULL;
	size = get_list_size(*list);
	less = 0;
	aux = *list;
	if (is_sorted(*list))
		return;
	while (size > 2)
	{
			if (!aux->next)
				return;
			if (aux->index == less)
			{
				push(list, &list_b, 'b');
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
		if (aux->index > aux->next->index)
			swap(list, 'a');
		push_all(&list_b, list, 'a');
}

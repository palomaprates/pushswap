#include "../push_swap.h"

void sort_small_stack(Node **list_a)
{
	Node	*aux;
	int index;
	int	i;
	int	size;

	aux = *list_a;
	i = 0;
	size = get_list_size(*list_a);
		while (i < size)
		{
			if (!aux->next)
				return;
			if (is_sorted(*list_a))
				return;
			else if (aux->value > aux->next->value)
				swap(list_a, 'a');
			else if(aux->value < aux->next->value)
				reverse_rotate(list_a, 'a');
			aux = *list_a;
			i++;
		}
}
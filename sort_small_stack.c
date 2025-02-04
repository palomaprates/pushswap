#include "push_swap.h"

int is_bigger(Node *list)
{
	int	size; 
	int	i;
	int	current;

	current = list->index;
	list = list->next;
	size = get_list_size(list);
	i = 0;
	while (i < size)
	{
		if(current > list->index)
			return (1);
		list = list->next;
		i++;
	}
	return (0);
}
int	is_sorted(Node *list)
{
	int	size;
	int	i;

	size = get_list_size(list);
	i = 0;
	while (i < size)
	{
		if (is_bigger(list))
			return (0);
		list = list->next;
		i++;
	}
	return (1);
}
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
			aux = aux->next;
			aux = *list_a;
			i++;
		}
}
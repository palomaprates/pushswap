#include "../push_swap.h"

int	is_bigger(Node *list)
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
		if (current > list->index)
			return (1);
		list = list->next;
		i++;
	}
	return (0);
}

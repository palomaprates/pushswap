#include "../push_swap.h"

int	get_node_index(Node *list, int index)
{
	int	i;
	int	size;

	i = 0;
	size = get_list_size(list);
	while (i < size)
	{
		if (i == index)
			return (list->index);
		i++;
		list = list->next;
	}
	return (-1);
}

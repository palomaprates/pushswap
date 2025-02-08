#include "../push_swap.h"

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

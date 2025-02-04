#include "../push_swap.h"

int get_bigger(Node *list_a, int size)
{
	int	i;
	int	bigger;

	i = 0;
	bigger = 0;
	while (i < size)
	{
		if (list_a->index > bigger)
			bigger = list_a->index;
		list_a = list_a->next;
		i++;
	}
	return (bigger);
}
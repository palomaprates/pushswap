#include "../push_swap.h"

void	push_all(Node **list1, Node **list2, char c)
{
	int	i;
	int	size;

	i = 0;
	size = get_list_size(*list1);
	while (i < size)
	{
		push(list1, list2, c);
		i++;
	}
}

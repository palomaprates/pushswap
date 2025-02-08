#include "../push_swap.h"

int	get_list_size(Node *listInit)
{
	int	i;

	i = 0;
	if (!listInit)
		return (0);
	while (listInit)
	{
		listInit = listInit->next;
		i++;
	}
	return (i);
}

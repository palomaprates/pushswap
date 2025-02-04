#include "../push_swap.h"

int get_list_size(Node *listInit)
{
	if (!listInit)
		return (0);
	int i;
	i = 0;
	while(listInit)
	{
		listInit = listInit->next;
		i++;
	}
	return (i);
}

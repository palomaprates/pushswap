#include "../push_swap.h"

void	add_front(Node **listInit, int value, int index)
{
	Node	*new;

	new = malloc(sizeof(Node));
	if (!new)
		return ;
	if (new)
	{
		new->value = value;
		new->index = index;
		new->next = *listInit;
		*listInit = new;
	}
}

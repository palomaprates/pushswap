#include "../push_swap.h"

Node	*create_node(int value, int index)
{
	Node	*new;

	new = malloc(sizeof(Node));
	if (!new)
		return (NULL);
	new->value = value;
	new->index = index;
	new->next = NULL;
	return (new);
}

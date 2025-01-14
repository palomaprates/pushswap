#include "../push_swap.h"

void add_front(Node **listInit, int nb)
{
	Node *new;
	new = malloc(sizeof(Node));
	if (new)
	{
		new->value = nb;
		new->next = *listInit;
		*listInit = new;
	}
}
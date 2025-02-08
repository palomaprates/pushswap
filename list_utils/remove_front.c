#include "../push_swap.h"

void	remove_front(Node **listInit)
{
	Node	*aux;

	if (!*listInit)
		return;

	aux = *listInit;
	*listInit = (*listInit)->next;
	free(aux); 
}
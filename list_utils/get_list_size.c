#include "push_swap.h"

int get_list_size(Node **listInit)
{
	Node *aux;
	if (!*listInit)
		return (0);
	aux = *listInit;
	int i;
	i = 0;
	while(aux)
	{
		aux = aux->next;
		i++;
	}
	return (i);
}
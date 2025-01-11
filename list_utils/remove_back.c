#include "push_swap.h"

void remove_back(Node **listInit)
{
	Node *aux;
	int i;
	int list_size;

	aux = *listInit;
	list_size = get_list_size(listInit);
	i = 0;
	if (!list_size)
		return;
	if (list_size == 1)
		*listInit = NULL;
	while (i < list_size)
	{
		if (i == list_size - 2)
		{
			aux->next = NULL;
			return;
		}
		aux = aux->next;
		i++;
	}
}
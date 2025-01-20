#include "../push_swap.h"

Node *get_last_node(Node **listInit)
{
	Node *aux;
	int i;
	int list_size;

	aux = *listInit;
	list_size = get_list_size(listInit);
	i = 0;
	if (!list_size)
		return NULL;
	if (list_size == 1)
		return *listInit;
	while (i < list_size)
	{
		if (i == list_size - 2)
			return aux->next;
		aux = aux->next;
		i++;
	}
	return NULL;
}

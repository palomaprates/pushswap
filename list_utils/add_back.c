#include "../push_swap.h"
#include "get_list_size.c"
void add_back(Node **list, int nb)
{
	Node *new;
	Node *aux;
	int i;
	int list_size;

	i = -1;
	list_size = get_list_size(list);
	new = malloc(sizeof(Node));
	if (!new)
		return;
	new->value = nb;
	new->next = NULL;
	aux = *list;
	if (list_size == 0)
		*list = new;
	else
	{
		while (++i < list_size)
		{
			if (i == list_size - 1)
				aux->next = new;
			else
				aux = aux->next;
		}
	}
}
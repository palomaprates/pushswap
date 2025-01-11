#include "push_swap.h"

void add_back(Node **list, int nb)
{
	Node *new;
	new = malloc(sizeof(Node));
	Node *aux;
	if (new)
	{
		new->value = nb;
		new->next = NULL;
		if (!*list)
		{
			*list = new; 
			aux = *list;
			new->next = aux->next;
		}
		else 
		{
			aux->next = new;
			aux = aux->next;
		}
	}
	else
	{
		printf("erro ao alocar memória");
	}
}
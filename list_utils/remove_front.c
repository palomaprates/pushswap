#include "../push_swap.h"

void remove_front(Node **listInit)
{
	Node *aux;
	aux = *listInit;

	if (aux)
	{
		aux = aux->next;
		*listInit = aux;
	}
}
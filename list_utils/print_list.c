#include "../push_swap.h"

void print_list(Node **listInit)
{
	Node *aux;
	aux = *listInit;
	while(aux)
	{
		printf("%d\n", aux->value);
		aux = aux->next;
	}
}
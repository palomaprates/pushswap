#include "../push_swap.h"

void print_index(Node **listInit)
{
	Node *aux;
	aux = *listInit;
	while(aux)
	{
		printf("index: %d ", aux->index);
		printf("\n");
		aux = aux->next;
	}
}
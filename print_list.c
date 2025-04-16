#include "push_swap.h"
#include <stdio.h>

void print_list(t_node **list_init)
{
	t_node *aux;
	aux = *list_init;
	while(aux)
	{
		printf("%d\n", aux->value);
		aux = aux->next;
	}
}
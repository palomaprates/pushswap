#include "../push_swap.h"

void swap(Node **listInit, char c)
{
	int	temp;
	int	temp_index;
	Node	*aux;
	if (get_list_size(*listInit) < 2)
		return;
	aux = *listInit;
	
	temp = aux->value;
	aux->value = aux->next->value; 
	aux->next->value = temp;

	temp_index = aux->index;
	aux->index = aux->next->index;
	aux->next->index = temp_index;
	write(1, "s", 1);
	write(1, &c, 1);
	write(1, "\n", 1);
}



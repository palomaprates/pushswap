#include "../push_swap.h"

void	push(Node **list, Node **listB, char c)
{
	Node	*aux;

	aux = *list;
	if (!*list)
		return ;
	add_front(listB, aux->value, aux->index);
	remove_front(list); 
	write(1, "p", 1);
	write(1, &c, 1);
	write(1, "\n", 1);
}

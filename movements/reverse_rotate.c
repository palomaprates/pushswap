#include "../push_swap.h"

void	reverse_rotate(Node **listInit, char c)
{
	Node	*aux;
	int	i;
	int	size;

	aux = *listInit;
	i = 0;
	size = get_list_size(*listInit);

	while (i < size)
	{
		if (i == size - 1)
			add_front(listInit, aux->value, aux->index);
		aux = aux->next;
		i++;
	}
	remove_back(listInit);
	write(1, "rr", 2);
	write(1, &c, 1);
	write(1, "\n", 1);
}
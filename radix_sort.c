#include "push_swap.h"

int	get_binary_len(int nb, int size)
{
	int	i;
	int len;

	i = 0;
	len = 0;
	while (i < size)
	{
		if (nb % 2 != 0)
		{
			nb = nb / 2;
			len++;
		}
		i++;
	}
	return len;
}
void push_all(Node **list1, Node **list2, char c)
{
	int size;
	int	i;
	size = get_list_size(list1);
	i = 0;
	while (i < size)
	{
		push(list1, list2, c);
		i++;
	}
}
void	radix_sort(Node **list_a)
{
	int bit;
	int i;
	int j;
	int nb;
	int size;
	int binary_len;
	Node *list_b;
	Node *aux;
	
	j = 0;
	size = get_list_size(list_a);
	aux = *list_a;
	list_b = NULL;
	i = 0;
	binary_len = 0;
	while (i <= binary_len + 1)
	{
		j = 0;
		aux = *list_a;
		while (j < size)
		{
			nb = aux->index;
			bit = (nb >> i) & 1; 
			if (bit == 0)
				push(list_a, &list_b, 'A');
			if (bit == 1)
				rotate(list_a, 'A');
			aux = aux->next;
			j++;
		}
		push_all(&list_b, list_a, 'B');
		i++;
		binary_len = get_binary_len(nb, size);
	}

}
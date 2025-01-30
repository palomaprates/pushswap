#include "push_swap.h"

// enquanto nbr % 2  ! 0 
//i++ return i
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
	int size;
	Node *list_b;
	Node *aux;
	int nb;
	j = 0;
	aux = *list_a;
	list_b = NULL;
	i = 0;
	size = get_list_size(list_a);
	while (i <= 2)
	{
		j = 0;
		aux = *list_a;
		while (j < size)
		{
				nb = aux->index;
				// printf("nb: %d\n", nb);
					bit = (nb >> i) & 1; 
					// printf("bit: %d\n", bit);
						if (bit == 0)
							push(list_a, &list_b, 'A');
						if (bit == 1)
							rotate(list_a, 'A');
			aux = aux->next;
			j++;
		}
		// printf("\n\nList b: %d\n",i);
		// 		print_list(&list_b);
		push_all(&list_b, list_a, 'B');
		// printf("\n\nList a after: %d\n",i);
		// 		print_list(list_a);
		i++;
	}


	// rotate(list_a);
	// print_list(&list_b);
}
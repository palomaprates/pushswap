#include "../push_swap.h"

void	sort_medium_stack(Node **list, int size)
{
	Node	*list_b;
	int	current_index;
	Node *aux;

	list_b = NULL;
	if (is_sorted(*list))
		return ;
	current_index = sort_medium_list(list, &list_b, size);
	aux = *list;
	if (current_index > aux->next->index)
		swap(list, 'a');
	push_all(&list_b, list, 'a');
}
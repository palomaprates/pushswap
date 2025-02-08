#include "../push_swap.h"

void	ft_lstclear(Node **list)
{
	Node	*temp;
	Node *current;
	
	current = *list;
	while (current)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
	*list = NULL;
}


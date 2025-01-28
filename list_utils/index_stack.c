#include "../push_swap.h"

void	indexStack(Node **list)
{

	Node *aux1;
	Node *aux2;
	int	rank;

	aux1 = *list;
	 while (aux1)
	 {
		int index = 0;
		aux2 = *list;

		while (aux2)
		{
			if (aux2->value < aux1->value)
					index++;
			aux2 = aux2->next;
		}
		aux1->index = index;
		aux1 = aux1->next;
    }
}
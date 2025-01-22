#include "push_swap.h"
#include "list_utils/add_back.c"
#include "list_utils/add_front.c"
#include "list_utils/remove_front.c"
#include "list_utils/print_list.c"

void push(Node **list, Node **listB)
{
	Node *aux;
	aux = *list;
	if (!*list)
		return;
	remove_front(list);
	add_front(listB, aux->value);
}

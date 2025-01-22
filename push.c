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

int main()
{
	Node *list = NULL;
	Node *listB = NULL;
	add_back(&list, 1);
	add_back(&list, 2);
	add_back(&list, 3);
	add_back(&list, 4);

	printf("lista a antes\n");
	print_list(&list);
	printf("lista b antes\n");
	print_list(&listB);
	push(&list, &listB);
	printf("=================\n");
	printf("lista a agora\n");
	print_list(&list);
	printf("lista b agora\n");
	print_list(&listB);
}

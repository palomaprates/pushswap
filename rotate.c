#include "push_swap.h"
#include "list_utils/add_back.c"
#include "list_utils/remove_back.c"
#include "list_utils/add_front.c"
#include "list_utils/print_list.c"
// #include "list_utils/get_list_size.c"
#include "list_utils/remove_front.c"
#include "list_utils/get_last_node.c"
#include "list_utils/get_first_node.c"




void rotate(Node **listInit)
{
	Node *aux;
	int first;
	int last;
	aux = get_first_node(listInit);
	first = aux->value;
	aux = get_last_node(listInit);
	last = aux->value;

	remove_front(listInit);
	add_front(listInit, last);
	remove_back(listInit);
	add_back(listInit, first);
}
int main()
{
	Node *list = NULL;
	add_back(&list, 1);
	add_back(&list, 2);
	add_back(&list, 3);
	add_back(&list, 4);


	printf("before change\n");
	print_list(&list);
	rotate(&list);
	printf("after change\n");
	print_list(&list);

}
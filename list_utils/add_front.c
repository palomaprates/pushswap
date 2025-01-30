#include "../push_swap.h"
// #include "print_list.c"
// #include "get_list_size.c"
void add_front(Node **listInit, int value, int index)
{
	Node *new;
    int size;
    int i;

	new = malloc(sizeof(Node));
    size = get_list_size(listInit);
    i = 0;
	if (new)
	{
		new->value = value;
		new->index = index;
		new->next = *listInit;
		*listInit = new;
	}
    while (i < size)
    {
        new->index = new->index + 1;
        i++;
    }
}
// int main()
// {
//     Node *list = NULL;
//     add_front(&list, 1, 0);
//     add_front(&list, 2, 0);
//     add_front(&list, 3, 0);
//     print_list(&list);
// }
#include "push_swap.h"

int main(int argc, char *argv[])
{
	int j;
	int test;
	Node *list;
	j = 0;
	list = NULL;
	if (argc <= 1)
		return (0);
	if (!create_stack(argc, argv, &list))
	{
		printf("Error");
		return (0);
	}
	indexStack(&list);
	radix_sort(&list);
	print_list(&list);
}
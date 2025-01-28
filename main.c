#include "push_swap.h"

int main(int argc, char *argv[])
{
	int j;
	int size;
	int *result;
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
	size = get_list_size(&list);
	printf("size %d\n", size);
	result = malloc(sizeof(int) * size);
	printf("Old\n");
	print_list(&list);
	indexStack(&list);
	printf("New\n");
	print_index(&list);
	printf("\n");
}
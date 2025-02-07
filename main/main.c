#include "../push_swap.h"

int main(int argc, char *argv[])
{
	int	size;
	Node	*list;

	list = NULL;
	if (argc <= 1)
	{
		printf("Error\n");
		return (0);
	}
	if (!create_stack(argc, argv, &list))
	{
		printf("Error\n");
		//clean list
		return (0);
	}
	indexStack(&list);
	size = get_list_size(list);
	if (size <= 3)
		sort_small_stack(&list);
	else if (size <= 5)
		sort_medium_stack(&list);
	else
		radix_sort(&list, size);
	print_list(&list);
	//clean list
}

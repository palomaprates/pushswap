#include "../push_swap.h"

int main(int argc, char *argv[])
{
	int	j;
	int	size;
	int	index;
	Node	*list;

	j = 0;
	list = NULL;
	if (argc <= 1)
		return (0);
	if (!create_stack(argc, argv, &list))
	{
		printf("Error\n");
		return (0);
	}
	indexStack(&list);
	size = get_list_size(list);

	if (size <= 3)
		sort_small_stack(&list);
	else
		radix_sort(&list, size);
	print_list(&list);
}
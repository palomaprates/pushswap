#include "../push_swap.h"

int	main(int argc, char *argv[])
{
	int	size;
	Node	*list;
	Node	*listB;

	list = NULL;
	listB = NULL;
	if (argc <= 1)
		return (0);
	if (!create_stack(argc, argv, &list))
	{
		write(2, "Error\n", 7);
		ft_lstclear(&list);
		return (0);
	}
	indexStack(&list);
	size = get_list_size(list);
	if (size <= 3)
		sort_small_stack(&list, size);
	else if (size <= 5)
		sort_medium_stack(&list, size);
	else
		radix_sort(&list, size);
	ft_lstclear(&list);
}

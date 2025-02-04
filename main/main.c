#include "push_swap.h"

// int	main()
// {
// 	Node *list; 
// 	list = NULL;
// 	add_back(&list, 1, 0);
// 	add_back(&list, 2, 0);
// 	add_back(&list, 3, 2);
// 	int i = 0;
// 	int size = get_list_size(list);
// 	// while (i < size) {
// 	// 	printf(" nb : %d\n", list->value);
// 	// 	list = list->next;
// 	// 	i++;
// 	// }
// 	if(is_sorted2(list))
// 		printf("ta ordenado");
// 	else
// 		printf("não ta ordenado");

// }


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
	{
		
		radix_sort(&list, size);
	}
	print_list(&list);
}
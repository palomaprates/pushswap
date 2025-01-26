#include "push_swap.h"

int main(int argc, char *argv[])
{
	int i;
	i = 1;
	Node *list;
	list = NULL;
	if (argc <= 1)
		return (0);

	if (!create_stack(argc, argv, &list))
	{
		printf("Error");
		return (0);
	}
	print_list(&list);
}
#include "push_swap.h"

void	indexStack(Node **list)
{

	Node *aux1;
	Node *aux2;
	int	rank;

	aux1 = *list;
	// while (aux1)
	// {
	// 	rank = 0;
	// 	aux2 = *list;
	// 	while(aux2)
	// 	{
	// 		if(aux2->value < aux1->value)
	// 			rank++;
	// 		aux2 = aux2->next;
	// 	}
	// 	aux1->index = rank;
	// 	aux1 = aux1->next;
	// }
	 while (aux1)
	 {
		int rank = 0;
		aux2 = *list;

		while (aux2)
		{
			if (aux2->value < aux1->value)
					rank++;
			aux2 = aux2->next;
		}
		aux1->index = rank;
		aux1 = aux1->next;
    }
	//indexar os elementos da lista, ao inves de indexar o array.
}

// int	*create_array(Node **list, int size)
// {
// 	Node *aux;
// 	int	i;
// 	int *arr;

// 	aux = *list;
// 	i = 1;
// 	arr = malloc(sizeof(int) * size);
// 	while (aux)
// 	{
// 		arr[i] = aux->value;
// 		aux = aux->next;
// 		i++;
// 	}
// 	return (arr);
// }
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
#include "push_swap.h"

void indexArray(int *arr, int size, int *result) {
    for (int i = 0; i < size; i++) {
        int rank = 0;
        for (int j = 0; j < size; j++) {
            if (arr[j] < arr[i]) {
                rank++;
            }
        }
        result[i] = rank;
    }
}
int main(int argc, char *argv[])
{
	int i;
	int j;
	Node *list;
	list = NULL;
	Node *aux = list;
	int size = argc - 1;
	int arr[size];
	int result[size];
	i = 1;
	j = 0;
	if (argc <= 1)
		return (0);
	if (!create_stack(argc, argv, &list))
	{
		printf("Error");
		return (0);
	}
	while (aux)
	{
		arr[i] = aux->value;
		aux = aux->next;
		i++;
	}
	indexArray(arr, size, result);

	printf("Old\n");
	print_list(&list);
	printf("New\n");
	while (j < size)
	{
		printf("%d ", result[j]);
		j++;
	}
	printf("\n");
}
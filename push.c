#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int value;
	struct node *next;
}Node;

void add_front(Node **listInit, int nb)
{
	Node *new;
	new = malloc(sizeof(Node));
	if (new)
	{
		new->value = nb;
		new->next = *listInit;
		*listInit = new;
	}
}
void print_list(Node **listInit)
{
	Node *aux;
	aux = *listInit;

	while(aux)
	{
		printf("%d\n", aux->value);
		aux = aux->next;
	}
}

int main()
{
	Node *list = NULL;
	add_front(&list, 1);
	add_front(&list, 2);
	add_front(&list, 3);
	print_list(&list);
}
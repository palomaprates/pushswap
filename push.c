#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int value;
	struct node *next;
}Node;

void add_back(Node **list, int nb)
{
	Node *new;
	new = malloc(sizeof(Node));
	Node *aux;
	if (new)
	{
		new->value = nb;
		new->next = NULL;
		if (!*list)
		{
			*list = new; 
			aux = *list;
			new->next = aux->next;
		}
		else 
		{
			aux->next = new;
			aux = aux->next;
		}
	}
	else
	{
		printf("erro ao alocar memória");
	}
}
void remove_front(Node **listInit)
{
	Node *aux;
	aux = *listInit;
	if (aux)
	{
		aux = aux->next;
		*listInit = aux;
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
	Node *listA = NULL;
	Node *listB = NULL;
	add_back(&listA, 1);
	add_back(&listA, 2);
	add_back(&listA, 3);

	add_back(&listB, 7);
	add_back(&listB, 8);
	add_back(&listB, 9);
	add_back(&listB, 10);

	remove_front(&listB);
	print_list(&listB);
}

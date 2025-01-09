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
int get_list_size(Node **listInit)
{
	Node *aux;
	if (!*listInit)
		return (0);
	aux = *listInit;
	int i;
	i = 0;
	while(aux)
	{
		aux = aux->next;
		i++;
	}
	return (i);
}

void swap(Node **listInit)
{
	int temp;
	Node *aux;
	if (get_list_size(listInit) < 2)
		return;
	aux = *listInit;
	
	temp = aux->value;
	aux->value = aux->next->value; 
	aux->next->value = temp;
}

void to_print_list(Node **listInit)
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
	int temp;
	add_back(&list, 1);
	// add_back(&list, 2);
	printf("printando lista original\n");
	to_print_list(&list);
	printf("=========================\n");
	//inverter a posição dos 2 elementos
	printf("printando lista alterada\n");
	to_print_list(&list);
	int size_list = get_list_size(&list);
	// printf("size of list %d\n", size_list);
	// sa(&list);
}






#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int value;
	struct node *next;
}Node;

void add_back(Node **list, int nb);

void add_front(Node **listInit, int nb);

int get_list_size(Node **listInit);

void print_list(Node **listInit);

void remove_back(Node **listInit);

void remove_front(Node **listInit);

Node *get_last_node(Node **listInit);

Node *get_first_node(Node **listInit);

void rotate(Node **list);
 
#endif
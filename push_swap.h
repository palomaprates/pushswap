#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct node
{
	int value;
	struct node *next;
}Node;

// ==========LIST UTILS==================
void add_back(Node **list, int nb);

void add_front(Node **listInit, int nb);

int get_list_size(Node **listInit);

void print_list(Node **listInit);

void remove_back(Node **listInit);

void remove_front(Node **listInit);

Node *get_last_node(Node **listInit);

Node *get_first_node(Node **listInit);

//==========UTILS=========================
int	is_number(int c);

int	is_space(int c);

int	ft_atoi(const char *str);

//==========MOVEMENTS=====================

void push(Node **list, Node **listB);

void rotate(Node **list);

void swap(Node **listInit);

#endif
#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

typedef struct node
{
	int value;
    int index; 
	struct node *next;
}Node;

// ==========LIST UTILS==================

void add_back(Node **list, int value, int index);

void add_front(Node **listInit, int value, int index);

int get_list_size(Node **listInit);

void print_list(Node **listInit);

void print_index(Node **listInit);

void remove_back(Node **listInit);

void remove_front(Node **listInit);

void	indexStack(Node **list);

Node *get_last_node(Node **listInit);

Node *get_first_node(Node **listInit);

//==========UTILS=========================
char	*ft_itoa(int n);

long long	ft_atoi(const char *str);

int	ft_strlen(char *str);

int	is_number(int c);

int	is_str_number(char *str);

//==========MOVEMENTS=====================

void push(Node **list, Node **listB, char c);

void rotate(Node **list, char c);

void swap(Node **listInit);

//===========STACK=========================

int create_stack(int size, char **str, Node **list);

void	radix_sort(Node **list_a);

#endif
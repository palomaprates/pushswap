#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

typedef	struct node
{
	int	value;
	int	index;
	struct node	*next;
}Node;

/*======================LIST UTILS==================*/ 

void	add_back(Node **list, int value, int index);

void	add_front(Node **listInit, int value, int index);

Node	*create_node(int value, int index);

void	print_list(Node **listInit);

void	remove_back(Node **listInit);

void	remove_front(Node **listInit);

void	push_all(Node **list1, Node **list2, char c);

void	indexStack(Node **list);

int	get_node_index(Node *list, int index);

int	get_list_size(Node *listInit);

/*==========================UTILS=========================*/

long long	ft_atoi(const char *str);

int	ft_strlen(char *str);

int	is_number(int c);

int	is_str_number(char *str);

int	is_duplicate(char **argv, int index);

/*========================MOVEMENTS=======================*/

void	push(Node **list, Node **listB, char c);

void	rotate(Node **list, char c);

void	reverse_rotate(Node **listInit, char c);

void	swap(Node **listInit, char c);

/*========================STACK===========================*/

int	create_stack(int size, char **str, Node **list);

/*=========================SORT===========================*/

void	sort_small_stack(Node **list_a, int size);

void	sort_medium_stack(Node **list, int	size);

void	radix_sort(Node **list_a, int size);

/*=======================SORT UTILS=======================*/

int	get_bigger(Node *list_a, int size);

int	get_binary_len(int nb);

int	is_sorted(Node *list);

int	is_bigger(Node *list);

void	sort_list(Node **list_a, int size, int binary);

int	sort_medium_list(Node **list, Node **list_b, int size);

#endif
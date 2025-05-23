/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprates- <pprates-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 10:39:48 by pprates-          #+#    #+#             */
/*   Updated: 2025/05/03 15:03:57 by pprates-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

typedef struct node
{
	struct node	*next;
	int			value;
	int			index;
}					t_node;

/*======================LIST UTILS==================*/

void		add_back(t_node **list, int value, int index);

void		add_front(t_node **listInit, int value, int index);

t_node		*create_node(int value, int index);

void		remove_back(t_node **listInit);

void		remove_front(t_node **listInit);

void		push_all(t_node **list1, t_node **list2, char c);

void		index_stack(t_node **list);

int			get_node_index(t_node *list, int index);

int			get_list_size(t_node *listInit);

void		ft_lstclear(t_node **list);

/*==========================UTILS=========================*/

long long	ft_atoi(const char *str);

int			ft_strlen(char *str);

int			is_number(int c);

int			is_str_number(char *str);

int			is_duplicate(char **argv, int index);

size_t		ft_strlcpy(char *dest, const char *src, size_t dest_size);

char		**ft_split(char const *s, char c);

char		*ft_strdup(const char *s);

/*========================MOVEMENTS=======================*/

void		push(t_node **list, t_node **listB, char c);

void		rotate(t_node **list, char c);

void		reverse_rotate(t_node **listInit, char c);

void		swap(t_node **listInit, char c);

/*=========================SORT===========================*/

void		sort_small_stack(t_node **list_a, int size);

void		sort_medium_stack(t_node **list);

void		radix_sort(t_node **list_a, int size);

/*=======================SORT UTILS=======================*/

int			get_bigger(t_node *list_a, int size);

int			get_binary_len(int nb);

int			is_sorted(t_node *list);

int			is_bigger(t_node *list);

void		sort_list(t_node **list_a, int size, int binary);

int			sort_medium_list(t_node **list, t_node **list_b);

/*===========================CHECK ERRORS===================*/

int			has_only_zero(char *str);

int			is_left_zero(char *str);

int			is_big_integer(char *str);

int			valid_number(char *str);

/*=============================STACK===========================*/

int			create_stack(int argc, char **str, t_node **list);

char		**get_splited_argv(int argc, char **argv);

/*===========================STACK UTILS======================*/

int			count_total_words(char **argv);

void		free_split(char **arr);

void		free_partial(char **arr, int filled);

#endif

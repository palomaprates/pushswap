/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paloma <paloma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 10:38:17 by pprates-          #+#    #+#             */
/*   Updated: 2025/04/29 11:43:11 by paloma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	get_binary_len(int nb)
{
	int	len;

	len = 0;
	while (nb)
	{
		nb = nb / 2;
		len++;
	}
	return (len);
}

void	sort_list(t_node **list_a, int size, int binary)
{
	t_node	*aux;
	t_node	*list_b;
	int		i;
	int		bit;
	int		index;

	i = -1;
	aux = *list_a;
	list_b = NULL;
	while (++i < size)
	{
		aux = *list_a;
		if (!aux)
			break ;
		index = aux->index;
		bit = (index >> binary) & 1;
		if (bit == 0)
			push(list_a, &list_b, 'b');
		if (bit == 1)
			rotate(list_a, 'a');
	}
	push_all(&list_b, list_a, 'a');
}

void	radix_sort(t_node **list, int size)
{
	int	i;
	int	bigger;
	int	binary_len;

	i = 0;
	bigger = get_bigger(*list, size);
	binary_len = get_binary_len(bigger);
	if (is_sorted(*list))
		return ;
	while (i < binary_len)
	{
		sort_list(list, size, i);
		i++;
	}
}

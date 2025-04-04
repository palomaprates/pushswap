/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprates- <pprates-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 10:38:56 by pprates-          #+#    #+#             */
/*   Updated: 2025/04/04 15:20:28 by pprates-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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
